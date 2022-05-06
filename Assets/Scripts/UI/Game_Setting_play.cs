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

                slider.value = Game_Setting.inst.Sound;
                toggle.isOn = Game_Setting.inst.noDamage;
            }

            Setting.SetActive(true);
        }
    }
    public void soundcheck()
    {
        Game_Setting.inst.Sound = slider.value;
        //Debug.Log(slider.value);
    }
    public void DagemeCheck()
    {
        Game_Setting.inst.noDamage = toggle.isOn;
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
