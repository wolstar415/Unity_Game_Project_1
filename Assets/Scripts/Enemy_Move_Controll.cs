using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy_Move_Controll : MonoBehaviour
{
    public List<Transform> moveListTarnsform;
    public Transform moveTarnsform;
    public CharacterController EnemyChar;
    public float rotationSpeed = 15f;
    public float movespeed = 300f;
    public int movenum =0;
    public EnemyStat enemyStat;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        enemyStat = gameObject.GetComponent<EnemyStat>();
        EnemyChar = gameObject.GetComponent<CharacterController>();

        for (int i = 1; i <= 11; i++)
        {
            moveListTarnsform.Add(GameObject.Find("EnemyNode" + i).transform);

        }
    }

    
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (GetComponent<EnemyStat>().Dead)
        {
            return;
        }
        moveTarnsform = moveListTarnsform[movenum];
        float Distance = Vector3.Distance(transform.position, moveTarnsform.position);
        Vector3 dir = moveTarnsform.position - transform.position;
        dir.y = 0;
        dir.Normalize();


        if (GetComponent<EnemyStat>().Stun==false)
        {

        gameObject.transform.position = Vector3.MoveTowards(transform.position, moveTarnsform.position, Time.deltaTime* enemyStat.Speed()* 0.01f);
        transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(dir), rotationSpeed * Time.deltaTime);
        }
        
        
        //Debug.Log(Distance);
        if (Distance < 0.1f)
        {
            movenum++;
            //moveListTarnsform.RemoveAt(0);
        }
        if (movenum >= 11)
        {
            LifeMin();
            GameInfo.inst.con_Enemy--;

            GameInfo.inst.deadCon++;
            GetComponent<EnemyStat>().Dead = true;
            Destroy(GetComponent<EnemyStat>().HpBar);
            gameObject.transform.position = new Vector3(1000f, 1000f, 1000f);
            Destroy(gameObject, 2.0f);

        }
    }

    void LifeMin()
    {
        
        if (gameObject.GetComponent<EnemyStat>().Boss ==false)
        {
            GameInfo.inst.LifeCheck(-1);
        }
        else
        {
            if (gameObject.GetComponent<EnemyStat>().f_Boss)
            {
                GameInfo.inst.GameOver();

            }
            else
            {
                GameInfo.inst.LifeCheck(-10);

            }

        }


    }
}
