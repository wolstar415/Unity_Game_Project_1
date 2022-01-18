using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Game_Setting_play : MonoBehaviour
{

    public Toggle toggle;
    public Slider slider;
    public GameObject Setting;
    public void SettingStart()
    {
        if (Setting.activeSelf==false)
        {

            if (GameObject.Find("Game_Setting") != null)

            {

                slider.value = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().Sound;
                toggle.isOn = GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage;
            }

            Setting.SetActive(true);
        }
    }
    public void soundcheck()
    {
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().Sound = slider.value;
        //Debug.Log(slider.value);
    }
    public void DagemeCheck()
    {
        GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage = toggle.isOn;
    }
    public void Game_Reset()
    {
        SceneManager.LoadScene("03_Play");
    }
    public void Game_Exit()
    {
        SceneManager.LoadScene("02_MainMenu");
    }
}
