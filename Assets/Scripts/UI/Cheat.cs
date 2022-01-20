using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cheat : MonoBehaviour
{

    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (Input.GetKeyDown(KeyCode.M))
        {
            GameObject.Find("GameInfo").GetComponent<GameInfo>().GoldCheck(100);

        }
        if (Input.GetKeyDown(KeyCode.P))
        {
            GameObject.Find("GameInfo").GetComponent<GameInfo>().PointCheck(10);

        }
    }
}
