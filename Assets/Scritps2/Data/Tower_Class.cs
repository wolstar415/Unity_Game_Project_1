using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower_Class : MonoBehaviour
{
    public static Tower_Class inst;
    void awak()
    {
        inst = this;
    }
    public List<GameObject> Tower_Level_1;
    public List<GameObject> Tower_Level_2;
    public List<GameObject> Tower_Level_3;
    public List<GameObject> Tower_Level_4;
    public List<GameObject> Tower_Level_5;
    public List<GameObject> Tower_Level_6;
    public List<GameObject> Tower_Level_7;
    public List<GameObject> Tower_Level_8;
   

}
