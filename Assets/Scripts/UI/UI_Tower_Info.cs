using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


    public class UI_Tower_Info : MonoBehaviour
{
    public GameObject Tower;
        public TextMeshProUGUI tower_ad_text;
        //public Text tower_range_text;
        public TextMeshProUGUI tower_as_text;
        public TextMeshProUGUI tower_Level_text;
        public TextMeshProUGUI tower_itemLevel_text;
        public TextMeshProUGUI tower_q_text;

        public TextMeshProUGUI tower_uplevel_text;

    public int[] levelupcost=new int[9];

    public GameObject nocheck;


    public List<Sprite> meSkill_sprite;
    public List<Sprite> RanSkill_sprite;
    public Image meSkill_image;
    public Image RanSkill_image;
    public Text textInfo_text;
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        levelupcost[1] = 1;
        levelupcost[2] = 2;
        levelupcost[3] = 4;
        levelupcost[4] = 4;
        levelupcost[5] = 8;
        levelupcost[6] = 16;
        levelupcost[7] = 32;
        levelupcost[8] = 999999999;
    }

    public void iconCheck()
    {
        meSkill_image.sprite = meSkill_sprite[Tower.GetComponent<TowerStat>().TowerIndex];
        RanSkill_image.sprite = RanSkill_sprite[Tower.GetComponent<TowerStat>().Item_InDEX];
    }
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (Tower == null || Tower.GetComponent<TowerStat>().Dead)
        {
            gameObject.SetActive(false);
            GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().clickState = ClickEventControll.ClickState.None;
            return;
        }
        //int i = Tower.GetComponent<TowerStat>().Item_InDEX;
        float ad = Tower.GetComponent<TowerStat>().DamageF();




        tower_ad_text.text= ad.ToString("F0");
        //tower_range_text.text= Tower.GetComponent<TowerStat>().Rang.ToString("F0");
        tower_as_text.text= Tower.GetComponent<TowerStat>().AtSpeedf().ToString("F2");
        tower_Level_text.text= Tower.GetComponent<TowerStat>().Level.ToString();
        tower_q_text.text= Tower.GetComponent<TowerStat>().quality.ToString();
        tower_itemLevel_text.text= Tower.GetComponent<TowerStat>().Item_Level.ToString();

        if (Tower.GetComponent<TowerStat>().Level ==8)
        {

            //tower_uplevel_text.text= "";
            nocheck.SetActive(false);
        }
        else
        {
            nocheck.SetActive(true);
            tower_uplevel_text.text= levelupcost[Tower.GetComponent<TowerStat>().Level].ToString();

        }
        

        //item_image.sprite = item_sprite[i];


        //item_text.text = GameObject.Find("GameData").GetComponent<GameData>().ITEM_Info_String[i];



    }
}
