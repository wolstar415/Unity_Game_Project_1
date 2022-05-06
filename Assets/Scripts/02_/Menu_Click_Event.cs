using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Menu_Click_Event : MonoBehaviour
{
    public GameObject Setting;
    public Slider slider;
    public Slider slider2;
    public GameObject damageON;
    public GameObject damageOFF;

    public GameObject nan;
    
    public GameObject Map;
    public GameObject Map2;
    public List<Vector3> rectTransformList;
    public int moveint=0;

    public void Button_Start()
    {
        
    }

    public void Button_Exit()
    {
        Application.Quit();
    }

    public void Button_Setting()
    {
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

    public void Button_Setting_Exit()
    {

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
    
    public void Clickdi1()
    {

        Game_Setting.inst.di = 1;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi2()
    {
        Game_Setting.inst.di = 2;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi3()
    {
        Game_Setting.inst.di = 3;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi4()
    {
        Game_Setting.inst.di = 4;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi5()
    {
        Game_Setting.inst.di = 5;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi6()
    {
        Game_Setting.inst.di = 6;
        nan.SetActive(false);
        Map.SetActive(true);
    }

    public void map1()
    {

        Loading.LoadScene("03_Play");
    }
    public void map2()
    {

        Loading.LoadScene("04_Play");
    }
    public void map3()
    {

        Loading.LoadScene("05_Play");
    }
    public void map4()
    {

        Loading.LoadScene("06_Play");
    }
    public void left()
    {
        if (moveint ==0)
        {
            return;
        }
        moveint--;
        rectTransformList[moveint] = new Vector3(rectTransformList[moveint].x, Map2.GetComponent<RectTransform>().position.y, rectTransformList[moveint].z);
        Map2.GetComponent<RectTransform>().position = rectTransformList[moveint];


    }
    public void right()
    {
        if (moveint == rectTransformList.Count-1)
        {
            return;
        }
        moveint++;
        rectTransformList[moveint] = new Vector3(rectTransformList[moveint].x, Map2.GetComponent<RectTransform>().position.y, rectTransformList[moveint].z);
        Map2.GetComponent<RectTransform>().position = rectTransformList[moveint];

    }

}
