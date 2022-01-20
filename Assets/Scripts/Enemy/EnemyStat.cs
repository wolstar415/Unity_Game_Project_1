using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Internal;

public class EnemyStat : MonoBehaviour
{
    public float Hp;
    public float Hpmax;

    public int GetMoney;
    public float StunCoolTime;
    public float StunCurTime;
    public int RoundNum;

    public bool Stun;

    public float SpeedCalculate;
    public float SpeedInit;
        
   public float DefenceCalculate;
    public float DefenceInit;
    public bool Dead;
    public bool Boss;
    public EnemySystem enemySystem;


    //Transform p
    public Transform parentTransform;
    public GameObject TextUi;

    public GameObject HpBarPrefeb;
    public GameObject HpBar;
    public float Defence()
    {
        float f = DefenceInit + DefenceCalculate;
        //if (f<0)
        //{
        //    f = 0;
        //}
        return f;
    }
    public float Speed()
    {
        float f = SpeedInit + SpeedCalculate; // 기본이속 + 연산이속(빼기등등)

        f = Mathf.Clamp(f, SpeedInit/2, 1000f);

        
        //if (Stun==true)
        //{
          //  return 0f;
        //}
        return f; 
    }
    public void SpeedEvenet(float speed,float time,float speedPer=0f)
    {
        float Unit_speed = Speed();
        float s = Unit_speed + (Unit_speed * speedPer);
        float t = Mathf.Clamp(time, 0.01f, 10f);

        StartCoroutine(SpeedEvenet2(s, t));

          

    }


    IEnumerator SpeedEvenet2(float speed,float time)
    {
        SpeedCalculate = SpeedCalculate + speed;
        yield return new WaitForSeconds(time);
        SpeedCalculate = SpeedCalculate - speed;
    }

    public void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        enemySystem = gameObject.GetComponent<EnemySystem>();
        parentTransform = GameObject.Find("HUDTranform").GetComponent<Transform>();
        HpBar = Instantiate(HpBarPrefeb);
        HpBar.transform.SetParent(parentTransform);
        HpBar.GetComponent<Hpbar_System>().Hp_Bar_Setup(Hp, Hpmax,Boss);
        //Hp = 5f;
    }

    public void StunGo(float Time)
    {
        if (Time <= 0)
        {
            return;
        }
        if (StunCoolTime <=0)
        {
            Stun = true;
            gameObject.transform.GetChild(2).gameObject.SetActive(true);
            StunCurTime = 0f;
        }
        StunCoolTime += Time;
    }
    public void StunGo2(float Time)
    {
        if (Time <= 0)
        {
            return;
        }
            Stun = true;
        gameObject.transform.GetChild(2).gameObject.SetActive(true);
        StunCurTime = 0f;

        StunCoolTime = Time;
    }
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        if (Dead)
        {
            return;
        }
        HpBar.transform.position=Camera.main.WorldToScreenPoint(transform.position+new Vector3(0f,0.5f,0f));
        //HpBar.GetComponent<Slider>().value = Hp / Hpmax;
        if (Stun == true)
        {
            StunCurTime += Time.deltaTime;

            if (StunCurTime > StunCoolTime)
            {
                StunCoolTime = 0f;
                StunCurTime = 0f;
                Stun = false;
                gameObject.transform.GetChild(2).gameObject.SetActive(false);
            }
        }
    }
    //tower.GetComponent<TowerStat>().DoubleAtPerF(), tower.GetComponent<TowerStat>().DoubleAtF(), tower.GetComponent<TowerStat>().quality
   public void DamageTrigger(GameObject tower,float damage, float addCriP = 0f, float addCriD = 0f)
    {
        if (tower.GetComponent<TowerStat>().Dead)
        {
            return;
        }
        if (Dead)
        {
            return;
        }
        int I_index = tower.GetComponent<TowerStat>().Item_InDEX;
        int I_level = tower.GetComponent<TowerStat>().Item_Level;
        int atc = tower.GetComponent<TowerStat>().AttackCont;
        float _damage=damage;
        float _addCriP = addCriP;
        float _addCriD = addCriD;
        float addDamage = 1f;





        if (I_index == 7 && atc == 1)
            {
                if (I_level == 1)
                {
                    StunGo(1f);
                    addDamage += 0.1f;
                }
                else if (I_level == 2)
                {
                    StunGo(1.1f);
                    addDamage += 0.15f;
                }
                else if (I_level == 3)
                {
                    StunGo(1.2f);
                    addDamage += 0.2f;
                }
                else if (I_level == 4)
                {
                    StunGo(1.3f);
                    addDamage += 0.25f;
                }
                else if (I_level == 5)
                {
                    StunGo(1.5f);
                    addDamage += 0.3f;
                }
            }
            else if (I_index == 8)
            {
                if (atc % (7 - I_level) == 0)
                {
                    _addCriP += 100f;

                }
            }
            else if (I_index == 9)
            {
                enemySystem.DefenseMi_Trigger(I_level, -1);
            }
            else if (I_index == 13)
            {
                if (Stun)
                {

                    addDamage = addDamage + (0.5f * I_level);
                }
            }
            else if (I_index == 14)
            {
                enemySystem.SpeedMi_Trigger2(I_level);
            }
            
            
            else if (I_index == 18)
            {
            if (atc % 7 == 0)
            {
                tower.GetComponent<TowerStat>().Item_AD = tower.GetComponent<TowerStat>().Item_AD + (tower.GetComponent<TowerStat>().Damage*(0.005f+(I_level*0.005f)));
            }
            }
            else if (I_index == 19)
            {
                StartCoroutine(Iitem19(tower, (_damage * addDamage)*(0.15f+(0.05f*I_level)), _addCriP, _addCriD));
            
            }


        
        DamageTriggerreal(tower, _damage*addDamage, _addCriP, _addCriD);
    }

    IEnumerator Iitem19(GameObject tower, float damage, float addCriP = 0f, float addCriD = 0f)
    {
        
        yield return new WaitForSeconds(0.5f);
        DamageTriggerreal(tower, damage, addCriP, addCriD);

    }
    public void DamageTriggerreal(GameObject tower, float damage, float addCriP = 0f, float addCriD = 0f)
    {
        if (Dead)
        {
            return;
        }
        if (tower == null)
        {
            return;

        }
        if (tower.GetComponent<TowerStat>().Dead)
        {
            return;
        }
        int I_index = tower.GetComponent<TowerStat>().Item_InDEX;
        int I_level = tower.GetComponent<TowerStat>().Item_Level;


        //float damage = tower.GetComponent<TowerStat>().DamageF();
        float doubleAtPer = tower.GetComponent<TowerStat>().DoubleAtPerF() + addCriP;
        float doubleAt = tower.GetComponent<TowerStat>().DoubleAtF() + addCriD;
        int q = tower.GetComponent<TowerStat>().quality;

        bool nodefese = false;

        float F_damage = damage;
        float add_damage = 1f;
        string D;
        float Randomf = Random.Range(0, 100);
        bool cri = false;
        float de = Defence();

        float Dafenceper = (de * 0.05f) / (1 - (de * 0.05f));

        if (I_index==15)
        {
            float nof=Random.Range(0f,100f);
            if (nof <=10*I_level)
            {
                nodefese = true;
            }
        }

        if (nodefese)
        {
            Dafenceper = 0;
        }
        add_damage = add_damage - Dafenceper;

        if (tower.GetComponent<TowerStat>().nextCri >0)
        {
            tower.GetComponent<TowerStat>().nextCri--;
            doubleAtPer += 100;
        }


        //F_damage = F_damage - Defence();
        if (Randomf <= doubleAtPer)
        {
            cri = true;
            add_damage = add_damage + (doubleAt / 100);
            //damage = damage * (1 + (doubleAt / 100));

        }
        if (q >= 1)
        {
            add_damage = add_damage + (q * 0.1f);
        }
        F_damage = damage * add_damage;


        F_damage = Mathf.Clamp(F_damage, 1, Hp);

        try
        {

            if (GameObject.Find("Game_Setting").GetComponent<Game_Setting>().noDamage == true)
            {

                D = F_damage.ToString("F0");

                GameObject clone = Instantiate(TextUi);
                clone.transform.SetParent(parentTransform);
                Bounds bounds = GetComponent<Collider>().bounds;

                if (cri)
                {

                    clone.GetComponent<RectTransform>().localScale = new Vector3(2f, 2f, 2f);
                    D = D + "!";
                }
                clone.GetComponent<UIHUDText>().Play(D, Color.red, bounds);



            }
        }
        catch (System.Exception)
        {


        }

        tower.GetComponent<TowerStat>().Damagecheck += F_damage;
        Hp = Hp - F_damage;
        if (Hp < 1)
        {

            if (tower.GetComponent<TowerStat>().Item_InDEX==12)
            {
                float G_r = Random.Range(0f, 100f);
                if (G_r <= tower.GetComponent<TowerStat>().Item_Level *20)
                {
                    GameObject.Find("GameInfo").GetComponent<GameInfo>().GoldCheck(1);
                }
            }
            Dead = true;
            GameObject.Find("GameInfo").GetComponent<GameInfo>().con_Enemy--;
            GameObject.Find("GameInfo").GetComponent<GameInfo>().GoldCheck(GetMoney);

            if (Boss)
            {
                //GameObject.Find("GameInfo").GetComponent<GameInfo>().PointCheck(4);
            }
            // GameObject.Find("GameInfo").GetComponent<GameInfo>().Gold += GetMoney;

            GameObject.Find("GameInfo").GetComponent<GameInfo>().deadCon++;
            Destroy(HpBar);
            gameObject.transform.position = new Vector3(1000f, 1000f, 1000f);
            Destroy(gameObject,2.0f);
        }
        else
        {
            HpBar.GetComponent<Hpbar_System>().Hp_Bar_Setup(Hp, Hpmax,Boss);
        }
    }




}
