using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameInfo : MonoBehaviour
{
    public static GameInfo inst;
    private void Awake()
    {
        inst = this;
    }
    public int Round=0;
    public int Gold = 0;
    public int Point = 0;
    public float NextRoundTime = 30f;
    public float EnemyCreateInterval = 1f;
    public int RoundCnt = 20;
    public int Level = 0;
    public int Life = 20;
    public int ItemConMax;
    public GameObject GoldText;
    public GameObject PointText;
    public Transform HUDTranform;


    public int Enemy_noCon;
    public int con_Enemy;

    public bool Gameover=false;
    public bool Victory=false;

    public int deadCon=0;

    public int final_Round=70;
    public GameObject heart;
    public enum Difficulty
    {
        None=0,
        Easy=1,
        Normal=2,
        Hard=3,
        VeryHard=4,
        VeryHard_=5,
        VeryHard__=6,
        VeryHard___=7,
    }
    public Difficulty difficulty;
    public float difficulty_AddHp = 1.0f;

    [Header("텍스트")]
    public TextMeshProUGUI Lifetext;
    public TextMeshProUGUI Roundtext;
    public TextMeshProUGUI Goldtext;
    public TextMeshProUGUI Pointtext;

    public GameObject Gameover_GameOject;
    public GameObject GameVictory_GameOject;
    public Transform Damageparent;
    public void GameOver()
    {
        Gameover = true;

        GameObject[] damagetext = GameObject.FindGameObjectsWithTag("Tower");

        for (int i = 0; i < damagetext.Length; i++)
        {
            ClickEventControll.inst.Tower_Destory(damagetext[i]);
        }

        GameObject[] damagetext2 = GameObject.FindGameObjectsWithTag("Enemy");

        for (int i = 0; i < damagetext2.Length; i++)
        {
            damagetext2[i].GetComponent<EnemyStat>().Dead = true;
            Destroy(damagetext2[i].GetComponent<EnemyStat>().HpBar);
            damagetext2[i].transform.position = new Vector3(1000f, 1000f, 1000f);
            Destroy(damagetext2[i], 2.0f);
        }
        Gameover_GameOject.SetActive(true);
        Time.timeScale = 0f;


    }

    public void GameVictory()
    {
        Victory = true;
        GameVictory_GameOject.SetActive(true);
        //Time.timeScale = 0f;
    }
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {

        try
        {
        int i = Game_Setting.inst.di;
        difficulty = (Difficulty)i;
        difficulty_AddHp= difficulty_AddHp*(0.9f+(0.1f*i));
            Game_Setting.inst.audiosource.clip = Game_Setting.inst.sound[1];
            Game_Setting.inst.audiosource.Play();

            if ( i >= 4)
            {
                LifeCheck(-19);
            }
            if (i==1)
            {
                Gold = 180;
                Point = 5;
                final_Round = 50;
            }
            if (i == 2)
            {
                Gold = 170;
                Point = 4;
                final_Round = 60;
            }
            if (i == 3)
            {
                Gold = 160;
                Point = 3;
                final_Round = 70;
            }
            if (i == 4)
            {
                Gold = 150;
                Point = 2;
                final_Round = 80;
            }
            if (i == 5)
            {
                Gold = 140;
                Point = 1;
                final_Round = 90;
            }
            if (i == 6)
            {
                Gold = 130;
                Point = 0;
                final_Round = 95;
            }
        }
        catch (System.Exception)
        {

            
        }
        
        textcheck();

    }
    public void textcheck()
    {
        Lifetext.text = Life.ToString();
        Roundtext.text = Round.ToString();
        Goldtext.text = Gold.ToString();
        Pointtext.text = Point.ToString();
    }
    public void GoldCheck(int g)
    {
        Gold += g;
        textcheck();
    }
    public void PointCheck(int g)
    {
        Point += g;
        textcheck();
    }
    public void LifeCheck(int g)
    {
        Life += g;
        textcheck();
        if (Life <=0)
        {
            GameOver();
        }

        Vector3 mousePositionc = new Vector3(heart.transform.position.x - 100f,heart.transform.position.y - 60f, Camera.main.WorldToScreenPoint(heart.transform.position).z);
        Texteffect.inst.T_Effect(g.ToString(), Color.red, Camera.main.ScreenToWorldPoint(mousePositionc), 2f);

    }
    public void RoundSet(int g)
    {
        Round = g;
        textcheck();
    }

}
