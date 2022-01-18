using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserTriggerEffect : MonoBehaviour
{
    public Tower_Controll tower_Controll;
    public GameObject Laser;
    public GameObject Lineprefeb;
    public LineRenderer laser;
    public GameObject meEffect;
    bool no=false;





    public Transform LaserStartPos;

    public void Start()
    {
        Laser = Instantiate(Lineprefeb);
        laser= Laser.GetComponent<LineRenderer>();
    }

    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (no)
        {
            return;
        }
        if (gameObject.GetComponent<TowerStat>().Dead==true )
        {
            no = true;
            Destroy(Laser);
            return;
        }
            if (tower_Controll.targetObject == null)
            {
            laser.enabled = false;
            meEffect.SetActive(false);
            return;
            }
            if (tower_Controll.enemies.Contains(tower_Controll.targetObject) == false)
            {
            laser.enabled = false;
            meEffect.SetActive(false);
            return;
        }

        meEffect.SetActive(true);
        laser.enabled = true;
        laser.SetPosition(0, LaserStartPos.position);
        laser.SetPosition(1, tower_Controll.targetObject.transform.position);
    }
}
