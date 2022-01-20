using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameInfo : MonoBehaviour
{
    public int Round=0;
    public int Gold = 0;
    public int Point = 0;
    public float NextRoundTime = 30f;
    public float EnemyCreateInterval = 1f;
    public int RoundCnt = 20;
    public int Level = 0;
    public int Life = 20;
    public int ItemConMax;

    public int Enemy_noCon;
    public int con_Enemy;

    public bool Gameover=false;

    public int deadCon=0;

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


    public void GameOver()
    {
        Gameover = true;
        //Destroy(GameObject.Find("MainObject"));

        GameObject[] damagetext = GameObject.FindGameObjectsWithTag("Tower");

        for (int i = 0; i < damagetext.Length; i++)
        {
            GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().Tower_Destory(damagetext[i]);
        }

        GameObject[] damagetext2 = GameObject.FindGameObjectsWithTag("Enemy");

        for (int i = 0; i < damagetext2.Length; i++)
        {
            damagetext2[i].GetComponent<EnemyStat>().Dead = true;
            Destroy(damagetext2[i].GetComponent<EnemyStat>().HpBar);
            damagetext2[i].transform.position = new Vector3(1000f, 1000f, 1000f);
            Destroy(damagetext2[i], 2.0f);
        }
    }
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        try
        {
        int i = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di;
        difficulty = (Difficulty)i;
        difficulty_AddHp= difficulty_AddHp*(0.9f+(0.1f*i));
            GameObject.Find("Game_Setting").GetComponent<AudioSource>().clip = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().sound[1];
            GameObject.Find("Game_Setting").GetComponent<AudioSource>().Play();

            if ( i >= 4)
            {
                LifeCheck(-19);
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
    }
    public void RoundSet(int g)
    {
        Round = g;
        textcheck();
    }

}
