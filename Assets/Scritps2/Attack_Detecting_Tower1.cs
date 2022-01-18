using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack_Detecting_Tower1 : MonoBehaviour
{
    public Tower_Controll tower_controll;
    public TowerStat towerstat;

    public int tower5=0;
    public int tower4=0;
   
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        tower_controll = gameObject.GetComponentInParent<Tower_Controll>();
        towerstat = gameObject.GetComponentInParent<TowerStat>();

    }

    
   


    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.tag == "Enemy" )
        {
            tower_controll.towerstate = Tower_Controll.TowerState.ATTACKING;
            tower_controll.enemies.Add(other.gameObject);

            if (tower_controll.enemies.Count ==1)
            {
                tower_controll.targetObject =other.gameObject;
            }
            
        }
        if (other.gameObject.tag == "Tower" )
        {
            if (towerstat.TowerIndex == 4 && other.gameObject.GetComponentInParent<TowerStat>().TowerIndex == 5)
            {
                tower5++;
                if (tower5 ==1)
                {
                    towerstat.Buff_AS += 50f;
                }
            }
            if (towerstat.TowerIndex == 5 && other.gameObject.GetComponentInParent<TowerStat>().TowerIndex == 4)
            {
                tower4++;
                if (tower4 == 1)
                {
                    towerstat.Buff_AS += 50f;
                }
            }

        }

    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Enemy")
        {
            tower_controll.enemies.Remove(other.gameObject);
            //if (tower_controll.enemies.Count == 1)
            //{
             //   tower_controll.targetObject = other.gameObject;
           // }
        }

        if (other.gameObject.tag == "Tower" )
        {
            if (towerstat.TowerIndex == 4 && other.gameObject.GetComponentInParent<TowerStat>().TowerIndex == 5)
            {
                tower5--;
                if (tower5 == 0)
                {
                    towerstat.Buff_AS -= 50f;
                }
            }
            if (towerstat.TowerIndex == 5 && other.gameObject.GetComponentInParent<TowerStat>().TowerIndex == 4)
            {
                tower4--;
                if (tower4 == 0)
                {
                    towerstat.Buff_AS -= 50f;
                }
            }

        }
    }
}
