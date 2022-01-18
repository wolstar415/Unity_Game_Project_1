using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet16Trigger : MonoBehaviour
{
    public float bulletSpeed = 10f;
    public bool Dead;
    public GameObject tower;
    public BulletState bulletState;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        //Destroy(gameObject,3f);
        bulletState=GetComponent<BulletState>();
    }

    
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (bulletState.MyTower.GetComponent<TowerStat>().Dead)
        {
            Destroy(gameObject);
            return;

        }
        transform.Translate(0, 0, bulletSpeed * Time.deltaTime);

    }

     void OnTriggerEnter(Collider other)
    {
        //return;
        //EnemyStat enemystat = other.gameObject.GetComponent<EnemyStat>();


        if (other.tag == "Enemy")
        {
           

            if (GetComponent<BulletState>().bulletstate == BulletState.Bulletstate.Dead || other.gameObject.GetComponent<EnemyStat>().Dead == true)
            {
                return;

            }

            tower = GetComponent<BulletState>().MyTower;
            if (tower == null || tower.GetComponent<TowerStat>().Dead)
            {
                return;
            }
            GameObject Effect01 = Instantiate(tower.GetComponent<Tower_BulletCreate>().effect[0], other.transform.position + new Vector3(0f, 0.3f, 0f), other.transform.rotation);
            Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
            Destroy(Effect01, 0.5f);
            tower.GetComponent<TowerStat>().AttackCont++;
            other.GetComponent<EnemyStat>().DamageTrigger(tower,tower.GetComponent<TowerStat>().DamageF());

        }
    }

}