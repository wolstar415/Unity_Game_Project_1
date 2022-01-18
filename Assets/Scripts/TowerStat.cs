using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TowerStat : MonoBehaviour
{

    int itemmax;
    public bool moveOk=false;
    public float Damage;
    public float AtSpeed;
    public float DoubleAt;
    public float DoubleAtPer;
    public float Rang;
    public int TowerIndex;
    public int Level;
    public int quality=0;
    public int AttackCont=0;
    public int nextCri = 0;

    public Vector3 startpos;

    public GameObject Tile;
    public int TileNum;

    public GameData gamedata;
    [Header("아이템")]
    public int Item_InDEX = 0;
    public int Item_Level = 0;
    public float Item_AD;
    public float Item_AS;
    public float Item_Cri_P;
    public float Item_Cri_D;
    public bool[] Item_Check;
    

    [Header("버프")]
    public float Buff_AD;
    public float Buff_AS;
    public float Buff_Cri_P;
    public float Buff_Cri_D;

    [Header("데미지UI")]
    public Transform parentTransform;
    public GameObject DamagePrefeb;
    public GameObject DamageUI;
    public float Damagecheck;
    [Header("애니")]
    public Animation _animation;
    public Animator _animator;
    public bool Dead = false;

    public bool attackcon(int i)
    {
        if (AttackCont % i == 0 && AttackCont != 0)
        {
            return true;

        }
        return false;
    }


    public float DamageF()
    {
        float f;
        f = Damage + Item_AD + Buff_AD;


        return f;
    }
    public float DoubleAtF()
    {
        float f;
        f = DoubleAt + Item_Cri_D + Buff_Cri_D;


        return f;
    }
    public float DoubleAtPerF()
    {
        float f;
        f = DoubleAtPer + Item_Cri_P + Buff_Cri_P;


        return f;
    }
    public float AtSpeedf()
    {
        float f;

        float AS = Item_AS+Buff_AS;
        f = AtSpeed;

            
        if (AS > 0)
        {
            AS = AS / 100;
            AS = 1 - AS;

            f = f * AS;
        }

            f = Mathf.Clamp(f,0.1f,100f);
        return f;
    }

    void Awake()  // 처음 시작시 실행되는 함수입니다.
    {
        gamedata= GameObject.Find("GameData").GetComponent<GameData>();
        Damage= gamedata.Tower_Ad[TowerIndex];
        AtSpeed = gamedata.Tower_As[TowerIndex];
        DoubleAt = gamedata.Tower_Cri_D[TowerIndex];
        DoubleAtPer = gamedata.Tower_Cri_P[TowerIndex];
        Rang = gamedata.Tower_Rang[TowerIndex];
        gameObject.transform.GetChild(1).localScale = gameObject.transform.GetChild(1).localScale + new Vector3(Rang, 0, Rang);
        itemmax = GameObject.Find("GameInfo").GetComponent<GameInfo>().ItemConMax;
        Item_Check = new bool[itemmax];
        for (int i = 0; i < Item_Check.Length; i++) { Item_Check[i] = false; }
    }

    private void Start()
    {
        parentTransform = GameObject.Find("DamageTranform").GetComponent<Transform>();
        DamageUI = Instantiate(DamagePrefeb);
        DamageUI.transform.SetParent(parentTransform);
        startpos = gameObject.transform.GetChild(3).localPosition;

    }
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (Dead)
        {
            return;
        }
        DamageUI.transform.position = Camera.main.WorldToScreenPoint(transform.position + new Vector3(0f, 1f, 0f));
        DamageUI.GetComponent<Text>().text = Damagecheck.ToString("F0");
    }

    public void toweritem()
    {
        Item_AD = gamedata.ITEM_AD[Item_InDEX];
        Item_AS = gamedata.ITEM_AS[Item_InDEX];
        Item_Cri_P = gamedata.ITEM_Cri_P[Item_InDEX];
        Item_Cri_D = gamedata.ITEM_Cri_D[Item_InDEX];
    }
    public void itemCreate()
    {
        //Debug.Log(Item_InDEX);

        //Invoke("item_skillStop_" + Item_InDEX, 0f);
        //Item_InDEX = 0;
        //Item_Level = 0;
        //Item_AD = 0;
        //Item_AS = 0;
        //Item_Cri_P = 0;
        //Item_Cri_D = 0;



        //for (int i = 0; i < itemmax; i++)
        //{
        //    Item_Check[i] = false;
        //}


        int ran = Random.Range(1, 5);
        Item_InDEX = Random.Range(1, 20);
        Item_Level = ran;
        Item_Check[Item_InDEX] = true;
        item_skill();

    }




    
public void item_skill()
    {
        int I_index = Item_InDEX;
        int I_level = Item_Level;

        if (I_index == 1)
        {
            StartCoroutine(Iitem_Skill_1(3.5f - (I_level * 0.5f)));

        }
        else if (I_index==2)
        {
            float f= I_level;
            gameObject.transform.GetChild(1).localScale = gameObject.transform.GetChild(1).localScale + new Vector3(f, 0, f);
        }
        else if (I_index == 3)
        {
            Item_AD = Item_AD + (Damage * (0.1f * I_level));
        }
        else if (I_index == 4)
        {
            Item_Cri_P = Item_Cri_P +  (10f * I_level);
        }
        else if (I_index == 5)
        {
            Item_Cri_D = Item_Cri_D + (15f * I_level);
        }
        else if (I_index == 6)
        {
            Item_AS = Item_AS + (10f * I_level);
        }
        else if (I_index == 16)
        {
            StartCoroutine(Iitem_Skill_16());
        }
        else if (I_index == 17)
        {
            StartCoroutine(Iitem_Skill_17());
        }
    }


    IEnumerator Iitem_Skill_1(float time)
    {
        while (true)
        {
            if (gameObject.GetComponent<Tower_Controll>().targetObject != null)
            {
                GameObject bullet = Instantiate(GameObject.Find("ITEM_SYSTEM").GetComponent<Item_System>().item_bullet[0]);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;
            }
            yield return new WaitForSeconds(time);
        }
    }
    IEnumerator Iitem_Skill_16()
    {
        while (true)
        {
            if (gameObject.GetComponent<Tower_Controll>().targetObject != null)
            {
                GameObject bullet = Instantiate(GameObject.Find("ITEM_SYSTEM").GetComponent<Item_System>().item_bullet[1]);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;
            }
            yield return new WaitForSeconds(3f);
        }
    }
    IEnumerator Iitem_Skill_17()
    {
        while (true)
        {
            if (gameObject.GetComponent<Tower_Controll>().targetObject != null)
            {
                float Damae = DamageF() * (0.25f + (0.1f * Item_Level));
                GameObject bullet = Instantiate(GameObject.Find("ITEM_SYSTEM").GetComponent<Item_System>().item_bullet[2]);
                bullet.transform.position = gameObject.GetComponent<Tower_Controll>().targetObject.transform.position+new Vector3(0f,0.3f,0f);
                bullet.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                Destroy(bullet, 0.5f);

                gameObject.GetComponent<Tower_Controll>().targetObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, Damae);


            }
            yield return new WaitForSeconds(3f);
        }
    }



}
