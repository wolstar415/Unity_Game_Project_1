using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack_Detecting_Tower27: MonoBehaviour
{
    public Tower_Controll tower_controll;
    public List<GameObject> buffs;
    

   
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        tower_controll = gameObject.GetComponentInParent<Tower_Controll>();

    }

    


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy" )
        {
            tower_controll.towerstate = Tower_Controll.TowerState.ATTACKING;
            tower_controll.enemies.Add(other.gameObject);
            //enemies_speed.Add(other.gameObject);
            other.gameObject.GetComponent<EnemyStat>().DefenceCalculate = other.gameObject.GetComponent<EnemyStat>().DefenceCalculate - 2;
            buffs.Add(other.gameObject);
            if (tower_controll.enemies.Count ==1)
            {
                tower_controll.targetObject =other.gameObject;
            }
            
        }
        

    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Enemy")
        {
            tower_controll.enemies.Remove(other.gameObject);
            if (buffs.Contains(other.gameObject))
            {
            other.gameObject.GetComponent<EnemyStat>().DefenceCalculate = other.gameObject.GetComponent<EnemyStat>().DefenceCalculate + 2;
                buffs.Remove(other.gameObject);
            }

            //if (tower_controll.enemies.Count == 1)
            //{
            //   tower_controll.targetObject = other.gameObject;
            // }
        }
    }
}
