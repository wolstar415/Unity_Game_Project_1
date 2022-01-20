using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Hpbar_System : MonoBehaviour
{
    //public Text Hptext;
    public TextMeshProUGUI Hptext;
    public Slider Hp_Bar;


public void Hp_Bar_Setup(float Hp,float HpMax,bool boss)
    {
        float a = Hp / HpMax;
        gameObject.GetComponent<Hpbar_System2>().CoolTime = 0f;

        Hp_Bar.value = a;
        if (boss)
        {
        Hptext.text = Hp.ToString("F0");
        }
        else
        {
        Hptext.text = "";

        }
    }
}
