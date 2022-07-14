using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ECS_MaterialMover : MonoBehaviour
{
    public Material a;


    // Update is called once per frame
    void Update()
    {
        a.SetTextureOffset("_MainTex", new Vector2(0, Time.time*1));
    }
}
