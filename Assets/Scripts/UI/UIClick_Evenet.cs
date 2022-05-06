using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIClick_Evenet : MonoBehaviour
{
    public GameObject TowerUI;
    public GameObject EnemyUI;

    //public int Levelint = 0;
    public GameObject Tower;

    public GameObject skill_info;
    //public GameObject item_info;



    public void TowerClick(GameObject tower)
    {
        TowerUI.GetComponent<UI_Tower_Info>().Tower=tower;
        
        Tower = tower;
        TowerUI.GetComponent<UI_Tower_Info>().iconCheck();
        TowerUI.SetActive(true);
        UIButtonClick.inst.resetbutton();

        //skill_info.SetActive(false);
        //EnemyUI.SetActive(false);
        //Levelint = tower.GetComponent<TowerStat>().Level;


    }

    public void EnemyClick(GameObject enemy)
    {
        EnemyUI.GetComponent<UI_Enemy_Info>().Enemy = enemy;
        TowerUI.SetActive(false);
        EnemyUI.SetActive(true);
        //Levelint = 0;
        Tower = null;
        //skill_info.SetActive(false);
        //item_info.SetActive(false);
    }
    public void NoneClick()
    {
        //Debug.Log("asd");
        TowerUI.SetActive(false);
        //EnemyUI.SetActive(false);
        //Levelint = 0;
        Tower = null;
        //skill_info.SetActive(false);
        //item_info.SetActive(false);
    }


}
