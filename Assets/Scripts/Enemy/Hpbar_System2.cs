using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Hpbar_System2 : MonoBehaviour
{
    public Slider slider1;
    public Slider slider2;
    public float CoolTime;




    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (slider2.value > slider1.value)
        {
            CoolTime += Time.deltaTime;
            //float t = CoolTime / 5f;
            

            //Debug.Log(Mathf.Lerp(slider2.value - slider1.value, slider1.value, t));
            //slider2.value = Mathf.Lerp(slider2.value - slider1.value, slider1.value,t);

            slider2.value = slider2.value - ((slider2.value - slider1.value) * CoolTime*1.3f);
            //slider2.value = slider2.value - ((Hp/Hpmax)*t);
            //slider2.value = Hp
            //slider2.value -= ((slider2.value - slider1.value) * t);
        }
        //if (slider2.value <= slider1.value && CoolTime !=0)
        //{
        //    Debug.Log(CoolTime);
        //    CoolTime = 0f;
        //    slider2.value = slider1.value;
        //}
    }
}
