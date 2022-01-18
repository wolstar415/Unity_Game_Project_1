using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack_Detecting_Tower28: MonoBehaviour
{
    public Tower_Controll tower_controll;



    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        tower_controll = gameObject.GetComponentInParent<Tower_Controll>();

    }




    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == gameObject.transform.parent.gameObject)
        {
            return;
        }
        
        if (other.gameObject.tag == "Enemy")
        {
            tower_controll.towerstate = Tower_Controll.TowerState.ATTACKING;
            tower_controll.enemies.Add(other.gameObject);
            //enemies_speed.Add(other.gameObject);
            other.gameObject.GetComponent<EnemyStat>().DefenceCalculate = other.gameObject.GetComponent<EnemyStat>().DefenceCalculate - 2;
            if (tower_controll.enemies.Count ==1)
            {
                tower_controll.targetObject =other.gameObject;
            }
            
        }
        if (other.gameObject.tag == "Tower"  )
        {
            other.gameObject.GetComponent<TowerStat>().Buff_AS += 20f;
        }


    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Enemy")
        {
            tower_controll.enemies.Remove(other.gameObject);
            other.gameObject.GetComponent<EnemyStat>().DefenceCalculate = other.gameObject.GetComponent<EnemyStat>().DefenceCalculate + 2;
            //if (tower_controll.enemies.Count == 1)
            //{
            //   tower_controll.targetObject = other.gameObject;
            // }
        }
        if (other.gameObject.tag == "Tower")
        {
            other.gameObject.GetComponent<TowerStat>().Buff_AS -= 20f;
        }

    }
}
