using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerBuild_Controll : MonoBehaviour
{
    public ClickEventControll clickEventControll;
    public GameObject towerobject;
   
    public void BuildStart()
    {
        if (true) // 돈있을때
        {
            

        }


    }
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        clickEventControll = ClickEventControll.inst;
    }

}
