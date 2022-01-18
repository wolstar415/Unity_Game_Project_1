using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Game_Setting : MonoBehaviour
{
    public static Game_Setting control;

    public float Sound = 1;
    public float Music = 1;
    public bool noDamage = false;

    public int di = 1;

    public List<AudioClip> sound;
    
   


    
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if (control ==null)
        {
            control = this;
        }
    }

}
