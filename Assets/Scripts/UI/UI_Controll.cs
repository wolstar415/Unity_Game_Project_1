using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Controll : MonoBehaviour
{
    public Text Heart_Text;
    public Text Gold_Text;
    public Text Point_Text;
    public Text Level_Text;
    public Text EnemyCon_Text;
    public GameInfo gameinfo;
   
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        gameinfo = GameObject.Find("GameInfo").GetComponent<GameInfo>();
    }

    
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        Heart_Text.text = gameinfo.Life.ToString();
        Gold_Text.text = gameinfo.Gold.ToString();
        Point_Text.text = gameinfo.Point.ToString();
        Level_Text.text = "Level "+ gameinfo.Level.ToString();
        EnemyCon_Text.text = gameinfo.Enemy_noCon.ToString() +"/"+ gameinfo.con_Enemy.ToString();
    }
}
