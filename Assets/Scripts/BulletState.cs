using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletState : MonoBehaviour
{
    public GameObject MyTower;
    public GameObject Target;
    public Transform TargetPos;
    public float Damage;
    public bool Cri;
    //public float DamageF;
    


    public enum Bulletstate
    {
        None=0,
        Run=1,
        Dead=2
    }
    public Bulletstate bulletstate;

    public void bulletDestory()
    {
        bulletstate = Bulletstate.Dead;
        Destroy(gameObject);
    }
}
