using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySystem : MonoBehaviour
{

    public bool SpeedMi_Bool_Trigger1=false;
    public bool SpeedMi_Bool_Trigger2=false;
    public bool DefenceMi_Bool_Trigger1=false;
    public bool DefenceMi_Bool_Trigger2=false;
    public EnemyStat enemystat;
    Coroutine[] co_my_coroutine=new Coroutine[10];

    public void Start()
    {
        enemystat= gameObject.GetComponent<EnemyStat>();
    }

    public void SpeedMi_Trigger(float time,float Speed=0f,float SpeedP=0f)
    {
        float minS = enemystat.SpeedInit * SpeedP;
        minS = minS - Speed;
        if (time < 0)
        {
            return;
        }
        if (time == 0)
        {
            enemystat.SpeedCalculate = enemystat.SpeedCalculate - minS;
            return;
        }

        enemystat.SpeedCalculate = enemystat.SpeedCalculate - minS;
        StartCoroutine(ISpeedMi_Trigger(minS,time));

    }

    public void SpeedMi_Trigger1()
    {
        float minS = enemystat.SpeedInit * 0.15f;


        if (SpeedMi_Bool_Trigger1)
        {
            StopCoroutine(co_my_coroutine[0]);
            co_my_coroutine[0] = null;
            co_my_coroutine[0] = StartCoroutine(ISpeedMi_Trigger1(minS));
        }
        else
        {
            SpeedMi_Bool_Trigger1 = true;
            enemystat.SpeedCalculate = enemystat.SpeedCalculate - minS;
            co_my_coroutine[0] = StartCoroutine(ISpeedMi_Trigger1(minS));
        }

    }
    public void SpeedMi_Trigger2(int i)
    {
        float minS = enemystat.SpeedInit * 0.30f;
        float t= i;


        if (SpeedMi_Bool_Trigger2)
        {
            
            StopCoroutine(co_my_coroutine[1]);
            co_my_coroutine[1] = null;
            co_my_coroutine[1] = StartCoroutine(ISpeedMi_Trigger2(minS,t));
        }
        else
        {
            SpeedMi_Bool_Trigger2 = true;
            enemystat.SpeedCalculate = enemystat.SpeedCalculate - minS;
            co_my_coroutine[1] =StartCoroutine(ISpeedMi_Trigger2(minS,t));
        }

    }
    IEnumerator ISpeedMi_Trigger(float minS,float time)
    {
        yield return new WaitForSeconds(time);
        enemystat.SpeedCalculate = enemystat.SpeedCalculate + minS;
    }

    IEnumerator ISpeedMi_Trigger1(float minS)
    {
        yield return new WaitForSeconds(3f);
        if (SpeedMi_Bool_Trigger1==true)
        {
            SpeedMi_Bool_Trigger1 = false;
            enemystat.SpeedCalculate = enemystat.SpeedCalculate + minS;
            co_my_coroutine[0] = null;
        }
        
    }
    IEnumerator ISpeedMi_Trigger2(float minS,float t)
    {
        yield return new WaitForSeconds(t);
        if (SpeedMi_Bool_Trigger2 == true)
        {
            SpeedMi_Bool_Trigger2 = false;
            enemystat.SpeedCalculate = enemystat.SpeedCalculate + minS;
            co_my_coroutine[1] = null;
        }
    }

    // 방어



    public void DefenseMi_Trigger(float time, float Speed = 0f, float SpeedP = 0f)
    {
        float minS = enemystat.DefenceInit * SpeedP;
        minS = minS - Speed;
        if (time < 0)
        {
            return;
        }
        if (time == 0)
        {
            enemystat.DefenceCalculate = enemystat.DefenceCalculate - minS;
            return;
        }

        enemystat.DefenceCalculate = enemystat.DefenceCalculate - minS;
        StartCoroutine(IDefenseMi_Trigger(minS, time));

    }

    public void DefenseMi_Trigger1()
    {
        float minS = enemystat.DefenceInit * 0.15f;


        if (DefenceMi_Bool_Trigger1)
        {
            StopCoroutine(co_my_coroutine[2]);
            co_my_coroutine[2] = null;
            co_my_coroutine[2] = StartCoroutine(IDefenseMi_Trigger1(minS));
        }
        else
        {
            DefenceMi_Bool_Trigger1 = true;
            enemystat.DefenceCalculate = enemystat.DefenceCalculate - minS;
            co_my_coroutine[2] = StartCoroutine(IDefenseMi_Trigger1(minS));
        }

    }

    public void DefenseMi_Trigger2()
    {
        float minS = 1;


        if (DefenceMi_Bool_Trigger2)
        {
            StopCoroutine(co_my_coroutine[3]);
            co_my_coroutine[3] = null;
            co_my_coroutine[3] = StartCoroutine(IDefenseMi_Trigger2(minS));
        }
        else
        {
            DefenceMi_Bool_Trigger2 = true;
            enemystat.DefenceCalculate = enemystat.DefenceCalculate - minS;
            co_my_coroutine[3] = StartCoroutine(IDefenseMi_Trigger2(minS));
        }

    }

    IEnumerator IDefenseMi_Trigger(float minS, float time)
    {
        yield return new WaitForSeconds(time);
        enemystat.DefenceCalculate = enemystat.DefenceCalculate + minS;
    }

    IEnumerator IDefenseMi_Trigger1(float minS)
    {
        yield return new WaitForSeconds(3f);
        DefenceMi_Bool_Trigger1 = false;
        enemystat.DefenceCalculate = enemystat.DefenceCalculate + minS;
        co_my_coroutine[2] = null;
    }
    IEnumerator IDefenseMi_Trigger2(float minS)
    {
        yield return new WaitForSeconds(3f);
        DefenceMi_Bool_Trigger2 = false;
        enemystat.DefenceCalculate = enemystat.DefenceCalculate + minS;
        co_my_coroutine[3] = null;
    }
}
