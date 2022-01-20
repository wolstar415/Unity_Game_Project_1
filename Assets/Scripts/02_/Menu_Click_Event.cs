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

    public void Button_Setting_Exit()
    {

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
    
    public void Clickdi1()
    {
        
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di = 1;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi2()
    {
       // GameObject.Find("Game_Setting").GetComponent<AudioSource>().Stop();
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di = 2;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi3()
    {
        //GameObject.Find("Game_Setting").GetComponent<AudioSource>().Stop();
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di = 3;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi4()
    {
        //GameObject.Find("Game_Setting").GetComponent<AudioSource>().Stop();
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di = 4;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi5()
    {
       // GameObject.Find("Game_Setting").GetComponent<AudioSource>().Stop();
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di = 5;
        nan.SetActive(false);
        Map.SetActive(true);
    }
    public void Clickdi6()
    {
        //GameObject.Find("Game_Setting").GetComponent<AudioSource>().Stop();
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().di = 6;
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

        Map2.GetComponent<RectTransform>().position = rectTransformList[moveint];


    }
    public void right()
    {
        if (moveint == rectTransformList.Count-1)
        {
            return;
        }
        moveint++;

        Map2.GetComponent<RectTransform>().position = rectTransformList[moveint];

    }

}
