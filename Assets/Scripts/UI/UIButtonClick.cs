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
    public GameObject MoneyIcon2;
    public GameObject MoneyIcon3;

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
        int i = GameInfo.inst.Level;

        if (GameInfo.inst.Gold <25 || GameInfo.inst.Level >= 10)
        {
            Vector3 mousePositionc = new Vector3(MoneyIcon.transform.position.x,
       MoneyIcon.transform.position.y, Camera.main.WorldToScreenPoint(MoneyIcon.transform.position).z);
            //Vector3 mousePosition = new Vector3(Input.mousePosition.x,
            //Input.mousePosition.y+100f, Camera.main.WorldToScreenPoint(Input.mousePosition).z);
            Texteffect.inst.T_Effect("No GOLD", Color.yellow, Camera.main.ScreenToWorldPoint(mousePositionc), 1f);
            return;
        }

        GameInfo.inst.GoldCheck(-25);
        
            Vector3 mousePosition = new Vector3(MoneyIcon.transform.position.x,
       MoneyIcon.transform.position.y, Camera.main.WorldToScreenPoint(MoneyIcon.transform.position).z);
        //Vector3 mousePosition = new Vector3(Input.mousePosition.x,
        //Input.mousePosition.y+100f, Camera.main.WorldToScreenPoint(Input.mousePosition).z);
        Texteffect.inst.T_Effect("-25G", Color.yellow, Camera.main.ScreenToWorldPoint(mousePosition),2f);

        GameInfo.inst.Level++;
        i++;
        if (GameInfo.inst.Level == 10)
        {
            level_Info_Text.text = "        Lv.Max" + "\n" +
            "Tower 1 : " + GameData.inst.Tower_Level1_Per[i] + "%\n" +
            "Tower 2 : " + GameData.inst.Tower_Level2_Per[i] + "%\n" +
            "Tower 3 : " + GameData.inst.Tower_Level3_Per[i] + "%";
            MoneyIcon.SetActive(false);
            MoneyIcon2.SetActive(false);
            MoneyIcon3.GetComponent<RectTransform>().position= MoneyIcon3.GetComponent<RectTransform>().position+new Vector3(120f,0,0);
        }
        else
        {
            level_Info_Text.text = "        Lv." + i + "\n" +
            "Tower 1 : " + GameData.inst.Tower_Level1_Per[i] + "%\n"+
            "Tower 2 : " + GameData.inst.Tower_Level2_Per[i] + "%\n"+
            "Tower 3 : " + GameData.inst.Tower_Level3_Per[i] + "%";
        }


    }

    private void Start()
    {
        levelupcost[1] = 1;
        levelupcost[2] = 2;
        levelupcost[3] = 4;
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
        slider.value = Game_Setting.inst.Sound;
        slider2.value = Game_Setting.inst.Music;
        if (Game_Setting.inst.noDamage)
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
        Game_Setting.inst.Sound = slider.value;
        //Debug.Log(slider.value);
    }
    public void musiccheck()
    {
        Game_Setting.inst.Music = slider2.value;
        Game_Setting.inst.audiosource.volume = slider2.value;
        //Debug.Log(slider.value);
    }

    public void RoundInfo()
    {
        int round = GameInfo.inst.Round;
        float hp = GameData.inst.Enemy_Hp[round];
        float defense= GameData.inst.Enemy_De[round];
        float speed= GameData.inst.Enemy_Sp[round];
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
        Game_Setting.inst.noDamage = false;


    }
    public void DagemeCheckOFF()
    {

        damageON.SetActive(true);
        damageOFF.SetActive(false);
        Game_Setting.inst.noDamage = true;

    }


    public void Restart()
    {

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        Time.timeScale = 1f;
    }
    public void Exit()
    {
        
        SceneManager.LoadScene("02_MainMenu");
        Game_Setting.inst.audiosource.clip = Game_Setting.inst.sound[0];
        Game_Setting.inst.audiosource.Play();
        Time.timeScale = 1f;

    }

    public void MeSkill_Button()
    {
        int i = UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().TowerIndex;
        add_Info_Text.text = GameData.inst.Tower_Info_String[i];
        Addtext.GetComponent<Addtext>().CulTime = 0f;
        Addtext.SetActive(true);
        //Addtext.GetComponent<Addtext>().CoolTime = 3f;
        checki = 1;
    }
    public void RanSkill_Button()
    {
        checki = 2;
        int i = UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().Item_InDEX;
        int l = UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().Item_Level;
        if (l ==1)
        {

            add_Info_Text.text = GameData.inst.ITEM_Info_String1[i];
        }
        else if (l == 2)
        {
            add_Info_Text.text = GameData.inst.ITEM_Info_String2[i];
        }
        else if (l == 3)
        {
            add_Info_Text.text = GameData.inst.ITEM_Info_String3[i];
        }
        else if (l == 4)
        {
            add_Info_Text.text = GameData.inst.ITEM_Info_String4[i];
        }
        else if (l == 5)
        {
            add_Info_Text.text = GameData.inst.ITEM_Info_String5[i];
        }
        Addtext.GetComponent<Addtext>().CulTime = 0f;
        Addtext.SetActive(true);
    }
    public void QSkill_Button()
    {
        checki = 3;
        int i = UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().quality;
        add_Info_Text.text = "Plus Damage : " + (i * 10).ToString() + "%";
        Addtext.GetComponent<Addtext>().CulTime = 0f;
        Addtext.SetActive(true);
    }
    public void towerstat_Button()
    {
        checki = 4;
        GameObject g = UI_Tower_Info.inst.Tower;
        add_Info_Text.text = "Cri : " + g.GetComponent<TowerStat>().DoubleAtPerF().ToString() + "%\n"+
            "Cri D : " + (g.GetComponent<TowerStat>().DoubleAtF()*1f).ToString() + "%"
            ;
        Addtext.GetComponent<Addtext>().CulTime = 0f;
            Addtext.SetActive(true);
    }

    public void resetbutton()
    {




        GameObject g = UI_Tower_Info.inst.Tower;

        int i = g.GetComponent<TowerStat>().quality;
        int i2 = g.GetComponent<TowerStat>().Item_InDEX;
        int l2 = g.GetComponent<TowerStat>().Item_Level;
        int i3 = g.GetComponent<TowerStat>().TowerIndex;




        Addtext.GetComponent<Addtext>().CulTime = 0f;
        if (checki == 1)
        {
            //Debug.Log(GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3]);

            add_Info_Text.text = GameData.inst.Tower_Info_String[i3];
        }
        if (checki == 2)
        {
            if (l2 == 1)
            {

                add_Info_Text.text = GameData.inst.ITEM_Info_String1[i2];
            }
            else if (l2 == 2)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String2[i2];
            }
            else if (l2 == 3)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String3[i2];
            }
            else if (l2 == 4)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String4[i2];
            }
            else if (l2 == 5)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String5[i2];
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
        if (GameInfo.inst.Point <= 0 )
        {
            return;
        }



        GameInfo.inst.PointCheck(-1);
        Vector3 mousePosition = new Vector3(Input.mousePosition.x,
            Input.mousePosition.y + 0f, Camera.main.WorldToScreenPoint(Input.mousePosition).z);
        Texteffect.inst.T_Effect("-1P", Color.cyan, Camera.main.ScreenToWorldPoint(mousePosition), 2f);
        GameObject g = UI_Tower_Info.inst.Tower;
        GameObject z = ClickEventControll.inst.Chantower(g);


        int i2 = z.GetComponent<TowerStat>().Item_InDEX;
        int l2 = z.GetComponent<TowerStat>().Item_Level;
        int i3 = z.GetComponent<TowerStat>().TowerIndex;



        int i = z.GetComponent<TowerStat>().quality;


        Addtext.GetComponent<Addtext>().CulTime = 0f;
        if (checki == 1)
        {
            //Debug.Log(GameObject.Find("GameData").GetComponent<GameData>().Tower_Info_String[i3]);

            add_Info_Text.text = GameData.inst.Tower_Info_String[i3];
        }
        if (checki == 2)
        {
            if (l2 == 1)
            {

                add_Info_Text.text = GameData.inst.ITEM_Info_String1[i2];
            }
            else if (l2 == 2)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String2[i2];
            }
            else if (l2 == 3)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String3[i2];
            }
            else if (l2 == 4)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String4[i2];
            }
            else if (l2 == 5)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String5[i2];
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
        if (GameInfo.inst.Point < levelupcost[UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().Level])
        {
            return;
        }



        GameInfo.inst.PointCheck(-levelupcost[UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().Level]);
        Vector3 mousePosition = new Vector3(Input.mousePosition.x,
            Input.mousePosition.y + 0f, Camera.main.WorldToScreenPoint(Input.mousePosition).z);
        Texteffect.inst.T_Effect(-levelupcost[UI_Tower_Info.inst.Tower.GetComponent<TowerStat>().Level]+"P", Color.cyan, Camera.main.ScreenToWorldPoint(mousePosition), 2f);
        GameObject g = UI_Tower_Info.inst.Tower;


        GameObject z= ClickEventControll.inst.UpTower2(g);


        int i2 = z.GetComponent<TowerStat>().Item_InDEX;
        int l2 = z.GetComponent<TowerStat>().Item_Level;
        int i3 = z.GetComponent<TowerStat>().TowerIndex;



        int i = z.GetComponent<TowerStat>().quality;


        Addtext.GetComponent<Addtext>().CulTime = 0f;
        if (checki == 1)
        {


            add_Info_Text.text = GameData.inst.Tower_Info_String[i3];
        }
        if (checki == 2)
        {
            if (l2 == 1)
            {

                add_Info_Text.text = GameData.inst.ITEM_Info_String1[i2];
            }
            else if (l2 == 2)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String2[i2];
            }
            else if (l2 == 3)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String3[i2];
            }
            else if (l2 == 4)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String4[i2];
            }
            else if (l2 == 5)
            {
                add_Info_Text.text = GameData.inst.ITEM_Info_String5[i2];
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
        ClickEventControll.inst.CancleTower();
    }

}
