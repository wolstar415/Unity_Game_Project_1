using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower_Controll : MonoBehaviour
{
    public enum TowerState
    {
        IDLE = 0,
        ATTACKING=1,
        MOVING=2,
        Dead=3
    }

    public TowerState towerstate;
    public List<GameObject> enemies;
    public GameObject targetObject;
    public TowerStat tower_stat;
    public float AttackCurTime;
    public float AttackCoolTime;
    public bool noRotation=false;
    public bool AttackCool=false;
    public bool noAni=false;

    bool Tower_7 = false;

    Quaternion startrotation;



    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        tower_stat=GetComponent<TowerStat>();
        AttackCool = true;
        startrotation = transform.GetChild(3).localRotation;
    }
    void NextEnemyScan()
    {
        if (enemies.Count ==0)
        {
            towerstate = TowerState.IDLE;
            
        }
        else
        {
            targetObject=enemies[0];
        }
    }
    void SwitchTower()
    {
        switch (towerstate)
        {
            case TowerState.IDLE:
                if ((tower_stat.TowerIndex == 7 || tower_stat.TowerIndex == 22) && Tower_7==true)
                {
                    tower_stat._animator.Play("AC_1");
                    Tower_7=false;
                }
                //AttackCurTime = 0;
                if (enemies.Count > 0)
                {
                    towerstate = TowerState.ATTACKING;

                }
                break;
            case TowerState.ATTACKING:
                if (targetObject == null || targetObject.activeSelf == false || targetObject.gameObject.GetComponent<EnemyStat>().Dead)

                {
                    enemies.Remove(targetObject);
                    targetObject = null;
                    

                }
                if (targetObject==null && enemies.Count>0)
                {
                    targetObject = enemies[0];
                }
                if (enemies.Count == 0)
                {
                    targetObject = null;
                    towerstate = TowerState.IDLE;
                    return;
                }

                if (enemies.Contains(targetObject) == false && AttackCool)
                {
                    //없으니까 타켓오브젝트 제거
                    targetObject = null;
                    NextEnemyScan();//다음꺼찾기
                }

                if (targetObject != null)
                {

                    if (noRotation==false && targetObject.gameObject.GetComponent<EnemyStat>().Dead==false)
                    {
                        try
                        {
                            //Vector3 dir = targetObject.transform.position - gameObject.transform.GetChild(3).position;
                            Vector3 dir = targetObject.transform.position - gameObject.transform.GetChild(3).position;
                                dir.y = 0;
                            dir.Normalize();

                            
                            transform.GetChild(3).rotation = Quaternion.Slerp(transform.GetChild(3).rotation, Quaternion.LookRotation(dir), 4 * Time.deltaTime);


                            //transform.GetChild(3).rotation = Quaternion.Slerp(transform.GetChild(3).rotation* startrotation, Quaternion.LookRotation(dir), 7 * Time.deltaTime);
                        }
                        catch (System.Exception)
                        {

                            
                        }
                
                    }


                }

                if (enemies.Count==0)
                {
                    towerstate=TowerState.IDLE;
                    return;
                }

                // 쿨

                if (AttackCool && targetObject != null)
                {
                    if ((tower_stat.TowerIndex == 7 || tower_stat.TowerIndex == 22) && Tower_7 == false)
                    {
                        tower_stat._animator.Play("AC_2");
                        Tower_7 = true;
                    }
                    AttackCool = false;
                    GetComponent<Tower_BulletCreate>().Enemy= targetObject;
                    //GetComponent<Tower_BulletCreate>().tower= targetObject;
                    //GetComponent<Tower_BulletCreate>().Invoke("attackCheck", 0f);
                    GetComponent<Tower_BulletCreate>().Invoke("BulletCreate_T_"+ tower_stat.TowerIndex, 0f);
                }
                break;

            case TowerState.MOVING:



                break;
            case TowerState.Dead:



                break;
            default:

                break;
        }
    }
    void EnemyCheck()
    {
        if (enemies.Count ==0)
        {
            return;
        }
        for (int i = 0; i < enemies.Count; i++)
        {
            if (enemies[i].GetComponent<EnemyStat>().Dead)
            {
                enemies.RemoveAt(i);
            }
            
        }
    }

    public void PointCheck()
    {
        int i = GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().selectlevelint;

        if (GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().ClickObject != gameObject && GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().playerState==ClickEventControll.PlayerState.Draging && gameObject.GetComponent<TowerStat>().Level == i && gameObject.GetComponent<TowerStat>().Level <8)
        {

            gameObject.transform.GetChild(2).gameObject.SetActive(true);
            //gameObject.transform.GetChild(3).GetComponent<>;
            //gameObject.GetComponent<TowerStat>().Tile.transform.GetChild()

        }
        else
        {
            gameObject.transform.GetChild(2).gameObject.SetActive(false);
            //gameObject.transform.GetChild(2).gameObject.SetActive(false);
        }


    }
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (tower_stat.Dead)
        {
            return;
        }
        
        if (AttackCool==false)
        {
            AttackCoolTime = tower_stat.AtSpeedf();
            AttackCurTime += Time.deltaTime;
            if (AttackCurTime > AttackCoolTime)
            {
                AttackCurTime = 0;
                AttackCool = true;
            }
        }
        

        PointCheck();
        SwitchTower();
       // EnemyCheck();
    }

    public void TowerDestory( )
    {
        transform.position = new Vector3(100f, 100f, 100f);
        Destroy(gameObject, 1f);
        towerstate = TowerState.Dead;
        tower_stat.Dead = true;
        gameObject.GetComponent<Tower_BulletCreate>().StopAllCoroutines();
        gameObject.GetComponent<TowerStat>().StopAllCoroutines();
        //StopAllCoroutines();
    }

}
