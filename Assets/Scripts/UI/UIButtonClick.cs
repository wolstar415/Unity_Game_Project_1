using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIButtonClick : MonoBehaviour
{
    public GameObject skill_info;
    public List<Sprite> SkillIamage;
    public Image SkillSprite;
   

    public GameObject Addtext;
    public Text add_Info_Text;
    public TextMeshProUGUI level_Info_Text;

    public GameObject MoneyIcon;

    [Header("설정")]
    public Slider slider;
    public Slider slider2;
    public GameObject damageON;
    public GameObject damageOFF;

    [Header("라운드")]
    public TextMeshProUGUI Roundtext;
    public TextMeshProUGUI hptext;
    public TextMeshProUGUI defensetext;
    public TextMeshProUGUI speedtext;

    public int checki = 0;

    public int[] levelupcost = new int[9];

    public void LevelUpButton()
    {
        int i = GameObject.Find("GameInfo").GetComponent<GameInfo>().Level;

        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Gold <25 || GameObject.Find("GameInfo").GetComponent<GameInfo>().Level >= 10)
        {
            return;
        }
        
        GameObject.Find("GameInfo").GetComponent<GameInfo>().GoldCheck(-25);
        GameObject.Find("GameInfo").GetComponent<GameInfo>().Level++;
        i++;
        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Level == 10)
        {
            level_Info_Text.text = "        Lv.Max" + "\n" +
            "Tower 1 : " + GameObject.Find("GameData").GetComponent<GameData>().Tower_Level1_Per[i] + "%\n" +
            "Tower 2 : " + GameObject.Find("GameData").GetComponent<GameData>().Tower_Level2_Per[i] + "%\n" +
            "Tower 3 : " + GameObject.Find("GameData").GetComponent<GameData>().Tower_Level3_Per[i] + "%";
            MoneyIcon.SetActive(false);
        }
        else
        {
            level_Info_Text.text = "        Lv." + i + "\n" +
            "Tower 1 : " + GameObject.Find("GameData").GetComponent<GameData>().Tower_Level1_Per[i] + "%\n"+
            "Tower 2 : " + GameObject.Find("GameData").GetComponent<GameData>().Tower_Level2_Per[i] + "%\n"+
            "Tower 3 : " + GameObject.Find("GameData").GetComponent<GameData>().Tower_Level3_Per[i] + "%";
        }


    }

    private void Start()
    {
        levelupcost[1] = 2;
        levelupcost[2] = 2;
        levelupcost[3] = 2;
        levelupcost[4] = 4;
        levelupcost[5] = 8;
        levelupcost[6] = 16;
        levelupcost[7] = 32;
        levelupcost[8] = 99999999;
    }
    public void TimeScale()
    {
        Time.timeScale = 1f;
    }
    public void SettingStart()
    {
        Time.timeScale = 0f;
        slider.value = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().Sound;
        slider2.value = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().Music;

        //toggle.isOn = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage;
        if (GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage)
        {
            damageON.SetActive(true);
            damageOFF.SetActive(false);
        }
        else
        {
            damageON.SetActive(false);
            damageOFF.SetActive(true);
        }

    }

    public void soundcheck()
    {
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().Sound = slider.value;
        //Debug.Log(slider.value);
    }
    public void musiccheck()
    {
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().Music = slider2.value;
        GameObject.Find("Game_Setting").GetComponent<AudioSource>().volume = slider2.value;
        //Debug.Log(slider.value);
    }

    public void RoundInfo()
    {
        int round = GameObject.Find("GameInfo").GetComponent<GameInfo>().Round;
        float hp = GameObject.Find("GameData").GetComponent<GameData>().Enemy_Hp[round];
        float defense= GameObject.Find("GameData").GetComponent<GameData>().Enemy_De[round];
        float speed= GameObject.Find("GameData").GetComponent<GameData>().Enemy_Sp[round];
        Time.timeScale = 0f;
        Roundtext.text = round + " Round";
        hptext.text = hp.ToString("F0");
        defensetext.text = defense.ToString("F0");
        speedtext.text = speed.ToString("F0");
        //Debug.Log(slider.value);
    }


    public void DagemeCheckOn()
    {

        damageON.SetActive(false);
        damageOFF.SetActive(true);
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage = false;


    }
    public void DagemeCheckOFF()
    {

        damageON.SetActive(true);
        damageOFF.SetActive(false);
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage = true;

    }


    public void Restart()
    {

        SceneManager.LoadScene("03_Play");
        Time.timeScale = 1f;
    }
    public void Exit()
    {
        
        SceneManager.LoadScene("02_MainMenu");
        GameObject.Find("Game_Setting").GetComponent<AudioSource>().clip = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().sound[0];
        GameObject.Find("Game_Setting").GetComponent<AudioSource>().Play();
        Time.timeScale = 1f;

    }

    public void MeSkill_Button()
    {
        int i = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower.GetComponent<TowerStat>().TowerIndex;
        add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i];
        Addtext.GetComponent<Addtext>().CulTime = 0f;
        Addtext.SetActive(true);
        //Addtext.GetComponent<Addtext>().CoolTime = 3f;
        checki = 1;
    }
    public void RanSkill_Button()
    {
        checki = 2;
        int i = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower.GetComponent<TowerStat>().Item_InDEX;
        int l = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower.GetComponent<TowerStat>().Item_Level;
        if (l ==1)
        {

            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String1[i];
        }
        else if (l == 2)
        {
            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String2[i];
        }
        else if (l == 3)
        {
            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String3[i];
        }
        else if (l == 4)
        {
            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String4[i];
        }
        else if (l == 5)
        {
            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String5[i];
        }
        Addtext.GetComponent<Addtext>().CulTime = 0f;
        Addtext.SetActive(true);
    }
    public void QSkill_Button()
    {
        checki = 3;
        int i = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower.GetComponent<TowerStat>().quality;
        add_Info_Text.text = "Plus Damage : " + (i * 10).ToString() + "%";
        Addtext.GetComponent<Addtext>().CulTime = 0f;
        Addtext.SetActive(true);
    }
    public void towerstat_Button()
    {
        checki = 4;
        GameObject g = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower;
        add_Info_Text.text = "Cri : " + g.GetComponent<TowerStat>().DoubleAtPerF().ToString() + "%\n"+
            "Cri D : " + (g.GetComponent<TowerStat>().DoubleAtF()*1f).ToString() + "%"
            ;
        Addtext.GetComponent<Addtext>().CulTime = 0f;
            Addtext.SetActive(true);
    }

    public void resetbutton()
    {




        GameObject g = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower;

        int i = g.GetComponent<TowerStat>().quality;
        int i2 = g.GetComponent<TowerStat>().Item_InDEX;
        int l2 = g.GetComponent<TowerStat>().Item_Level;
        int i3 = g.GetComponent<TowerStat>().TowerIndex;




        Addtext.GetComponent<Addtext>().CulTime = 0f;
        if (checki == 1)
        {
            //Debug.Log(GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3]);

            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3];
        }
        if (checki == 2)
        {
            if (l2 == 1)
            {

                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String1[i2];
            }
            else if (l2 == 2)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String2[i2];
            }
            else if (l2 == 3)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String3[i2];
            }
            else if (l2 == 4)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String4[i2];
            }
            else if (l2 == 5)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String5[i2];
            }
        }
        if (checki == 3)
        {
            add_Info_Text.text = "Plus Damage : " + (i * 10).ToString() + "%";
            ;
        }
        if (checki == 4)
        {
            add_Info_Text.text = "Cri : " + g.GetComponent<TowerStat>().DoubleAtPerF().ToString() + "%\n" +
            "Cri D : " + (g.GetComponent<TowerStat>().DoubleAtF() * 1f).ToString() + "%"
            ;
        }
    }
    public void Ch_Button()
    {
        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Point <= 0 )
        {
            return;
        }



        GameObject.Find("GameInfo").GetComponent<GameInfo>().PointCheck(-1);
        GameObject g = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower;
        GameObject z = GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().Chantower(g);


        int i2 = z.GetComponent<TowerStat>().Item_InDEX;
        int l2 = z.GetComponent<TowerStat>().Item_Level;
        int i3 = z.GetComponent<TowerStat>().TowerIndex;



        int i = z.GetComponent<TowerStat>().quality;


        Addtext.GetComponent<Addtext>().CulTime = 0f;
        if (checki == 1)
        {
            //Debug.Log(GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3]);

            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3];
        }
        if (checki == 2)
        {
            if (l2 == 1)
            {

                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String1[i2];
            }
            else if (l2 == 2)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String2[i2];
            }
            else if (l2 == 3)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String3[i2];
            }
            else if (l2 == 4)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String4[i2];
            }
            else if (l2 == 5)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String5[i2];
            }
        }
        if (checki == 3)
        {
            add_Info_Text.text = "Plus Damage : " + (i * 10).ToString() + "%";
            ;
        }
        if (checki == 4 )
        {
            add_Info_Text.text = "Cri : " + g.GetComponent<TowerStat>().DoubleAtPerF().ToString() + "%\n" +
            "Cri D : " + (g.GetComponent<TowerStat>().DoubleAtF() * 1f).ToString() + "%"
            ;
        }






    }
    public void Up_Button()
    {
        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Point < levelupcost[GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower.GetComponent<TowerStat>().Level])
        {
            return;
        }



        GameObject.Find("GameInfo").GetComponent<GameInfo>().PointCheck(-levelupcost[GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower.GetComponent<TowerStat>().Level]);
        GameObject g = GameObject.Find("Tower_GameInfo").GetComponent<UI_Tower_Info>().Tower;


        GameObject z= GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().UpTower2(g);


        int i2 = z.GetComponent<TowerStat>().Item_InDEX;
        int l2 = z.GetComponent<TowerStat>().Item_Level;
        int i3 = z.GetComponent<TowerStat>().TowerIndex;



        int i = z.GetComponent<TowerStat>().quality;


        Addtext.GetComponent<Addtext>().CulTime = 0f;
        if (checki == 1)
        {
            //Debug.Log(GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3]);

            add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3];
        }
        if (checki == 2)
        {
            if (l2 == 1)
            {

                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String1[i2];
            }
            else if (l2 == 2)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String2[i2];
            }
            else if (l2 == 3)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String3[i2];
            }
            else if (l2 == 4)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String4[i2];
            }
            else if (l2 == 5)
            {
                add_Info_Text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String5[i2];
            }
        }
        if (checki == 3)
        {
            add_Info_Text.text = "Plus Damage : " + (i * 10).ToString() + "%";
            ;
        }
        if (checki == 4)
        {
            add_Info_Text.text = "Cri : " + g.GetComponent<TowerStat>().DoubleAtPerF().ToString() + "%\n" +
            "Cri D : " + (g.GetComponent<TowerStat>().DoubleAtF() * 1f).ToString() + "%"
            ;
        }






    }
    public void Canbtn()
    {
        GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().CancleTower();
    }

}
