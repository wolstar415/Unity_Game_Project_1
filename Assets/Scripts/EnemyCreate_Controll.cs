using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyCreate_Controll : MonoBehaviour
{
    public List<GameObject> EnemyObject;
    public List<GameObject> BossEnemyObject;
    public float coolTime = 1f;
    public float curTime = 0f;
    GameInfo gameInfo;
    public int EnemyNameCnt = 0;

    public float Enemy_Hp;
    public float Enemy_Sp;
    public float Enemy_De;
    public int Enemy_Gold;
    public GameData gameData;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        gameData=GameObject.Find("GameData").GetComponent<GameData>();
        gameInfo = GameObject.Find("GameInfo").GetComponent<GameInfo>();

        //StartCoroutine(StartRound(1f, 20));
        //StartCoroutine(StartRound(1f, 1));
        //StartCoroutine(delayTime());

       // Invoke("RoundStart", gameInfo.NextRoundTime);
    }


    public void RoundStat(GameObject tower)
    {
        int I_index = tower.GetComponent<TowerStat>().Item_InDEX;
        int I_level = tower.GetComponent<TowerStat>().Item_Level;
        tower.GetComponent<TowerStat>().Damagecheck = 0f;
        tower.GetComponent<TowerStat>().AttackCont = 0;
        tower.GetComponent<TowerStat>().nextCri = 0;

        if (I_index ==10)
        {
            tower.GetComponent<TowerStat>().Item_AD += tower.GetComponent<TowerStat>().Damage*(I_level*0.01f);
        }
        else if (I_index == 11)
        {
            gameInfo.GoldCheck(I_level);
        }
        else if (I_index == 20)
        {
            tower.GetComponent<TowerStat>().nextCri = I_level;
        }


    }
    public void RoundStart()
    {
        gameInfo.deadCon = 0;
        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Gameover)
        {
            return;
        }
        EnemyNameCnt = 0;

        //gameInfo.Round++;
        // gameInfo.RoundSet(Round + 1);
        gameInfo.RoundSet(gameInfo.Round+1);
        if (gameInfo.Round > 1)
        {
        
        gameInfo.GoldCheck(30);
            gameInfo.PointCheck(1);
            GameObject[] damagetext = GameObject.FindGameObjectsWithTag("Tower");

            for (int i = 0; i < damagetext.Length; i++)
            {
                RoundStat(damagetext[i]);

            }
        }

        
        gameInfo.RoundCnt = gameData.Enemy_con[gameInfo.Round];
        Enemy_Hp = gameData.Enemy_Hp[gameInfo.Round]*gameInfo.difficulty_AddHp;
        Enemy_Sp = gameData.Enemy_Sp[gameInfo.Round];
        Enemy_De = gameData.Enemy_De[gameInfo.Round];
        Enemy_Gold = gameData.Enemy_Gold[gameInfo.Round];


        //if (gameInfo.Round % 1 == 0)
        //{
        //    gameInfo.PointCheck(1);

        //}


        StartCoroutine(gogo());



    }
    IEnumerator gogo()
    {
        yield return new WaitForSeconds(3f);
        if (gameInfo.Round % 5 == 0)
        {
            gameInfo.Enemy_noCon = 1;
            StartCoroutine(bossCreate());


        }
        else
        {
            gameInfo.Enemy_noCon = 20;
            StartCoroutine(StartRoundGo(gameInfo.EnemyCreateInterval, gameInfo.RoundCnt));
        }
    }

    IEnumerator bossCreate()
    {
        yield return new WaitForSeconds(0f);

        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Gameover)
        {
            yield break;
        }
        GameObject Enemy = Instantiate(BossEnemyObject[gameInfo.Round/5]);
        Enemy.transform.position = gameObject.transform.position;
        //Invoke("RoundStart", gameInfo.NextRoundTime);
        Enemy.gameObject.name = "Boss_Round" + gameInfo.Round;
        Enemy.GetComponent<EnemyStat>().RoundNum = gameInfo.Round;
        Enemy.GetComponent<EnemyStat>().Hp = Enemy_Hp;
        Enemy.GetComponent<EnemyStat>().Hpmax = Enemy_Hp;
        Enemy.GetComponent<EnemyStat>().SpeedInit = Enemy_Sp;
        Enemy.GetComponent<EnemyStat>().DefenceInit = Enemy_De;
        Enemy.GetComponent<EnemyStat>().GetMoney = Enemy_Gold;
        EnemyNameCnt++;
        gameInfo.con_Enemy++;
        gameInfo.Enemy_noCon--;
    }

    IEnumerator StartRoundGo(float Time,int EnemyCnt)
    {

        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Gameover)
        {
            yield break;
        }
        else
        { 


        if (EnemyCnt >0)
        {
        GameObject Enemy = Instantiate(EnemyObject[gameInfo.Round]);
        Enemy.transform.position = gameObject.transform.position;
        Enemy.gameObject.name = "Enemy_Round" + gameInfo.Round + "_" + EnemyNameCnt;
            Enemy.GetComponent<EnemyStat>().RoundNum = gameInfo.Round;
            Enemy.GetComponent<EnemyStat>().Hp = Enemy_Hp;
            Enemy.GetComponent<EnemyStat>().Hpmax = Enemy_Hp;
            Enemy.GetComponent<EnemyStat>().SpeedInit = Enemy_Sp;
            Enemy.GetComponent<EnemyStat>().DefenceInit = Enemy_De;
            Enemy.GetComponent<EnemyStat>().GetMoney = Enemy_Gold;
            EnemyNameCnt++;
            gameInfo.con_Enemy++;
            gameInfo.Enemy_noCon--;
            yield return new WaitForSeconds(Time);
        StartCoroutine(StartRoundGo(Time, EnemyCnt - 1));
        }
            yield return new WaitUntil(() => gameInfo.deadCon >=gameInfo.RoundCnt);
            //Debug.Log("라운드시작"+ gameInfo.Round);
            gameInfo.deadCon = 0;
            RoundStart();


        }

    }

    IEnumerator delayTime()
    {
        yield return new WaitForSeconds(1);
        Debug.Log("time = " + Time.time);
    }

}
