using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyCreate_Controll : MonoBehaviour
{
    public static EnemyCreate_Controll inst;
    public List<GameObject> EnemyObject;
    public List<GameObject> BossEnemyObject;

    private void Awake()
    {
        inst = this;
    }
    public List<GameObject> EnemyObjectRan;
    public List<GameObject> EnemyObjectRan2;
    
    public float coolTime = 1f;
    public float curTime = 0f;
    public GameInfo gameInfo;
    public int EnemyNameCnt = 0;

    public float Enemy_Hp;
    public float Enemy_Sp;
    public float Enemy_De;
    public int Enemy_Gold;
    public GameData gameData;

    public GameObject final_Boss;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {


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
            float add = tower.GetComponent<TowerStat>().Damage * (I_level * 0.01f);
            tower.GetComponent<TowerStat>().Item_AD += add;
            Texteffect.inst.T_Effect( add.ToString("F0")+ "AD+", Color.red, tower.transform.position, 1.5f);

        }
        else if (I_index == 11)
        {
            if (gameInfo.Round % I_level == 0)
            {
                gameInfo.GoldCheck(1);
                Texteffect.inst.T_Effect("+1G", Color.yellow, tower.transform.position, 1.5f);

            }


        }
        else if (I_index == 20)
        {
            tower.GetComponent<TowerStat>().nextCri = I_level;
            Texteffect.inst.T_Effect("CriC+" + I_level, Color.yellow, tower.transform.position, 1f);

        }


    }
    public void RoundStart()
    {
        gameInfo.deadCon = 0;
        if (GameInfo.inst.Gameover)
        {
            return;
        }
        EnemyNameCnt = 0;


        gameInfo.RoundSet(gameInfo.Round+1);


        if (gameInfo.Round > 1)
        {
        
        gameInfo.GoldCheck(30);
            GameObject g = GameInfo.inst.GoldText; 
            Vector3 mousePositionc = new Vector3(g.transform.position.x - 50f,
        g.transform.position.y - 60f, Camera.main.WorldToScreenPoint(g.transform.position).z);
            Texteffect.inst.T_Effect("+30G", Color.yellow, Camera.main.ScreenToWorldPoint(mousePositionc), 1.5f);

            gameInfo.PointCheck(1);
            GameObject p = GameInfo.inst.PointText;
            Vector3 mousePosition = new Vector3(p.transform.position.x - 50f,
        p.transform.position.y - 60f, Camera.main.WorldToScreenPoint(p.transform.position).z);
            Texteffect.inst.T_Effect("+1P", Color.cyan, Camera.main.ScreenToWorldPoint(mousePosition), 1.5f);




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
        
        yield return new WaitForSeconds(1f);
        GameObject[] damagetext = GameObject.FindGameObjectsWithTag("Tower");
     if (damagetext.Length >0)
     {

     

        for (int i = 0; i < damagetext.Length; i++)
        {
            RoundStat(damagetext[i]);

        }
     }


        if (gameInfo.Round == gameInfo.final_Round)
        {
            //gameInfo.RoundSet(gameInfo.Round - 1);
            StartCoroutine(F_bossCreate());

            yield break;
        }
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

    IEnumerator F_bossCreate()
    {
        



        yield return new WaitForSeconds(3f);

        GameObject Enemy = Instantiate(final_Boss);
        //Enemy.transform.GetChild(0).localScale = new Vector3(1.7f, 1.7f, 1.7f);
        Enemy.GetComponent<EnemyStat>().Boss = true;
        Enemy.GetComponent<EnemyStat>().f_Boss = true;
        Enemy.transform.position = gameObject.transform.position;
        //Invoke("RoundStart", gameInfo.NextRoundTime);
        Enemy.gameObject.name = "Final_Boss";
        Enemy.GetComponent<EnemyStat>().RoundNum = 9999;
        Enemy.GetComponent<EnemyStat>().Hp = gameData.Enemy_Hp[gameInfo.final_Round] * gameInfo.difficulty_AddHp * 1.5f;
        Enemy.GetComponent<EnemyStat>().Hpmax = gameData.Enemy_Hp[gameInfo.final_Round] * gameInfo.difficulty_AddHp * 1.5f;
        Enemy.GetComponent<EnemyStat>().SpeedInit = gameData.Enemy_Sp[gameInfo.final_Round];
        Enemy.GetComponent<EnemyStat>().DefenceInit = gameData.Enemy_De[gameInfo.final_Round];
        Enemy.GetComponent<EnemyStat>().GetMoney = 20;

    }


    IEnumerator bossCreate()
    {
        int i = Random.Range(0, EnemyObjectRan2.Count-1);
        yield return new WaitForSeconds(0f);
        

        if (GameInfo.inst.Gameover)
        {
            yield break;
        }
        //GameObject Enemy = Instantiate(BossEnemyObject[gameInfo.Round/5]);
        GameObject Enemy = Instantiate(EnemyObjectRan2[i]);
        Enemy.transform.GetChild(0).localScale = new Vector3(1.7f, 1.7f, 1.7f);
        Enemy.GetComponent<EnemyStat>().Boss=true;
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
        yield return new WaitUntil(() => Enemy.GetComponent<EnemyStat>().Dead== true);
        yield return new WaitForSeconds(1f);
        //Debug.Log("라운드시작"+ gameInfo.Round);
        if (EnemyObjectRan2.Count > 1)
        {

            EnemyObjectRan2.RemoveAt(i);
        }
        gameInfo.deadCon = 0;
        RoundStart();


    }



    IEnumerator StartRoundGo(float Time, int EnemyCnt)
    {

        var t = new WaitForSeconds(Time);
        int i = Random.Range(0, EnemyObjectRan.Count);
        if (GameInfo.inst.Gameover)
        {
            yield break;
        }
        else
        {
            int EnemyCount = 0;


            while (EnemyCount < EnemyCnt)
            {
                GameObject Enemy = Instantiate(EnemyObjectRan[i]);

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
                EnemyCount++;
                yield return t;
            }

            yield return new WaitUntil(() => gameInfo.deadCon == EnemyCount);
                if (EnemyObjectRan.Count > 1)
                {
                    EnemyObjectRan.RemoveAt(i);
                }

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
