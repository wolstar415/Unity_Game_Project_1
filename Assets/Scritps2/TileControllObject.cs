using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileControllObject : MonoBehaviour
{
    public List<GameObject> TileObject;

    public int tilecnt;
   
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {

        for (int i = 0; i <= tilecnt; i++)
        {
            TileObject.Add(GameObject.Find("buildingTile" + i));
            GameObject.Find("buildingTile" + i).GetComponent<TlieObject>().TowerTileNum = i;
        }

    }


    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        
    }
}
