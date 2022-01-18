using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


    public class UI_Enemy_Info : MonoBehaviour
{
    public GameObject Enemy;
        public Text enemy_hp_text;
        public Text enemy_de_text;
        public Text enemy_sp_text;
        public Text enemy_Round_text;

        void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        
    }

    
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
       
        if (Enemy == null || Enemy.activeSelf == false)
        {
            gameObject.SetActive(false);
            GameObject.Find("ClickEventControll").GetComponent<ClickEventControll>().clickState = ClickEventControll.ClickState.None;
            return;
        }
        enemy_hp_text.text= Enemy.GetComponent<EnemyStat>().Hp.ToString("F0");
        enemy_de_text.text= Enemy.GetComponent<EnemyStat>().DefenceInit.ToString("F0");
        enemy_sp_text.text = Enemy.GetComponent<EnemyStat>().SpeedInit.ToString("F0");
        enemy_Round_text.text= "Round : "+Enemy.GetComponent<EnemyStat>().RoundNum.ToString();
    }
}
