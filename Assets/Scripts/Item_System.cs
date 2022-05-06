using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item_System : MonoBehaviour
{
    public List<GameObject> item_bullet;
    public static Item_System inst;
    private void Awake()
    {
        inst = this;
    }
}
