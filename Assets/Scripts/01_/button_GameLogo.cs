using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class button_GameLogo : MonoBehaviour
{

    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (Input.GetMouseButtonDown(0))
        {
            SceneManager.LoadScene("02_MainMenu");
        }
    }
}
