using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Addtext : MonoBehaviour
{
    public float CoolTime = 3f;
    public float CulTime = 0f;
    //public Text text;
   
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        CoolTime = 3f;
    }
    
    public void OnDisable()
    {
        gameObject.SetActive(false);
    }
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        CulTime += Time.deltaTime;
        if (CulTime > CoolTime)
        {
            CulTime = 0f;
            gameObject.SetActive(false);

        }
    }
}
