using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack_Detecting : MonoBehaviour
{
    public Tower_Controll tower_controll;
   
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        tower_controll = gameObject.GetComponentInParent<Tower_Controll>();

    }
    public float buff_AD = 0f;
    public float buff_AS = 0f;
    public float buff_RANG = 0f;
    public float buff_criP = 0f;
    public float buff_criD = 0f;

    [Header("이속은 +1 해야지 1감소 이속P은 +0.1 해야지 10퍼 감소 방어는 +1 해야지 1감소")]
    public float debuff_speed = 0f;
    public float debuff_speedP = 0f;
    public float debuff_defense = 0f;


    
  


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == gameObject.transform.parent.gameObject)
        {
            return;
        }
        if (other.gameObject.tag == "Enemy" )
        {
            tower_controll.towerstate = Tower_Controll.TowerState.ATTACKING;
            tower_controll.enemies.Add(other.gameObject);

            if (tower_controll.enemies.Count ==1)
            {
                tower_controll.targetObject =other.gameObject;
            }
            if (debuff_speed + debuff_defense +debuff_speedP != 0)
            {
                other.gameObject.GetComponent<EnemyStat>().DefenceCalculate = other.gameObject.GetComponent<EnemyStat>().DefenceCalculate - debuff_defense;
                other.gameObject.GetComponent<EnemyStat>().SpeedCalculate = other.gameObject.GetComponent<EnemyStat>().SpeedCalculate - debuff_speed;
                other.gameObject.GetComponent<EnemyStat>().SpeedCalculate = other.gameObject.GetComponent<EnemyStat>().SpeedCalculate - (other.gameObject.GetComponent<EnemyStat>().SpeedInit * debuff_speedP);
            }

        }

        if (other.gameObject.tag == "Tower" && buff_AD+buff_AS+buff_criD+buff_criP+buff_RANG !=0)
        {
            other.gameObject.GetComponent<TowerStat>().Buff_AD += buff_AD;
            other.gameObject.GetComponent<TowerStat>().Buff_AS += buff_AS;
            other.gameObject.GetComponent<TowerStat>().Buff_Cri_D += buff_criD;
            other.gameObject.GetComponent<TowerStat>().Buff_Cri_P += buff_criP;
            gameObject.transform.localScale = gameObject.transform.localScale + new Vector3(buff_RANG, 0, buff_RANG);
        }


    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject == gameObject.transform.parent.gameObject)
        {
            return;
        }


        if (other.gameObject.tag == "Enemy")
        {
            tower_controll.enemies.Remove(other.gameObject);
            //if (tower_controll.enemies.Count == 1)
            //{
            //   tower_controll.targetObject = other.gameObject;
            // }
            if (debuff_speed+ debuff_defense + debuff_speedP != 0)
            {
            other.gameObject.GetComponent<EnemyStat>().DefenceCalculate = other.gameObject.GetComponent<EnemyStat>().DefenceCalculate + debuff_defense;
            other.gameObject.GetComponent<EnemyStat>().SpeedCalculate = other.gameObject.GetComponent<EnemyStat>().SpeedCalculate + debuff_speed;
            other.gameObject.GetComponent<EnemyStat>().SpeedCalculate = other.gameObject.GetComponent<EnemyStat>().SpeedCalculate + (other.gameObject.GetComponent<EnemyStat>().SpeedInit * debuff_speedP);
            }
        }

        if (other.gameObject.tag == "Tower" && buff_AD + buff_AS + buff_criD + buff_criP + buff_RANG != 0)
        {
            other.gameObject.GetComponent<TowerStat>().Buff_AD -= buff_AD;
            other.gameObject.GetComponent<TowerStat>().Buff_AS -= buff_AS;
            other.gameObject.GetComponent<TowerStat>().Buff_Cri_D -= buff_criD;
            other.gameObject.GetComponent<TowerStat>().Buff_Cri_P -= buff_criP;
            gameObject.transform.localScale = gameObject.transform.localScale - new Vector3(buff_RANG, 0, buff_RANG);
        }
    }
}
