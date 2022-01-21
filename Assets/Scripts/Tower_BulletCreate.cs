using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower_BulletCreate : MonoBehaviour
{
    public GameObject Bullet00;

    public GameObject Enemy = null;

    public Tower_Controll tower_controll;
    public TowerStat towerstat;
    public Transform CreatePos;
    public Transform CreatePos2;
    public Transform CreatePos3;
    bool[] my_coroutine_is_running = new bool[100];
    [Header("이펙트")]
    public List<GameObject> effect;


    //public void attackCheck() // 0번 미사일
    //{
    //    towerstat.AttackCont++;




    //}

    //public void BulletCreate_T_0() // 0번 미사일
    //{
    //towerstat.AttackCont++;
    //    GameObject bullet = Instantiate(Bullet00);
    //    bullet.transform.position = transform.position;
    //    bullet.GetComponent<BulletState>().MyTower = gameObject;
    //    //z
    //bullet.GetComponent<BulletState>().attackcon = towerstat.AttackCont;
    //    bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;



    //    // 데미지 + 아이템 추가 데미지



    //}

    public void BulletCreate_T_0() // 0번 미사일
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_0_AC(Enemy));


        // 데미지 + 아이템 추가 데미지



    }

    IEnumerator BulletCreate_T_0_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.25f);

        if (enemy.gameObject.GetComponent<EnemyStat>().Dead || towerstat.Dead)
        {
            yield break;
        }
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Destroy(Effect01, 0.5f);
        
        //towerstat._animation.Play
        towerstat.AttackCont++;
        if (towerstat.attackcon(2))
        {
            enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF(), towerstat.DoubleAtPerF());

        }
        else
        {

            enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
        }


    }

    public void BulletCreate_T_1() // 1번 미사일 캐논임
    {
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = CreatePos.transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;

        

    }
    public void BulletCreate_T_2() // 2번 미사일 주위 3명까지 멀티샷
    {

        StartCoroutine(BulletCreate_T_2_AC());


    }
    IEnumerator BulletCreate_T_2_AC()
    {
        yield return new WaitForSeconds(0.25f);
        int con = 0;
        towerstat._animator.Play("Attack");
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 3)
            {
            }
            else
            {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];



                con++;
            }
        }
    }
    public void BulletCreate_T_3() // 한발탄
    {
        //towerstat._animator.Play("Attack");
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = CreatePos.transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z

        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;



    }
    public void BulletCreate_T_4() // 소피아
    {
        towerstat._animator.Play("Attack");
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z

        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;

        

    }
    public void BulletCreate_T_5() // 데니
    {
        towerstat._animator.Play("Attack");
        GameObject bullet = Instantiate(Bullet00);

        bullet.transform.position = transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;

        

    }

    public void BulletCreate_T_6() 
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_6_ac(Enemy));

        

    }
    IEnumerator BulletCreate_T_6_ac(GameObject enemy)
    {
        yield return new WaitForSeconds(0.25f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);

        towerstat.AttackCont++;
        enemy.GetComponent<EnemySystem>().SpeedMi_Trigger1();
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());

    }

    public void BulletCreate_T_7() //레이저
    {
        towerstat.AttackCont++;
        if (Enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            return;
        }
        Enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());



    }

    public void BulletCreate_T_8()
    {

        StartCoroutine(BulletCreate_T_8_ac(Enemy));



    }
    IEnumerator BulletCreate_T_8_ac(GameObject enemy)
    {
        yield return new WaitForSeconds(0.25f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        float damage = towerstat.DamageF();

        //수치
        float ras = 1.5f;
        float time = 0f;
        //
        towerstat.AttackCont++;
        towerstat._animator.Play("Attack");
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), Quaternion.Euler(new Vector3(-90f, 0f, 0f)));
        //Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 1f);
        StartCoroutine(rangeDamageTrigger1(gameObject, enemy.transform.position, ras, time, damage));
    }

    public void BulletCreate_T_9() // 9번 주위 3명가지 공격
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_9_ac());
        
        

    }
    IEnumerator BulletCreate_T_9_ac()
    {
        yield return new WaitForSeconds(0.25f);
        int con = 0;
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 3)
            {
            }
            else
            {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];



                con++;
            }
        }
    }
    public void BulletCreate_T_10() // 드워프 즉시 타격
    {

        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_10_ac(Enemy));



    }
    IEnumerator BulletCreate_T_10_ac(GameObject enemy)
    {
        
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        
        towerstat.AttackCont++;

        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //
        addD = addD * 0.01f;
        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }
        _Damage += addD;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Destroy(Effect01, 0.5f);

        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);


    }

    public void BulletCreate_T_11() // 방어 감소 중첩불가능임
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_11_AC(Enemy));



    }

    IEnumerator BulletCreate_T_11_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        float _Damage = towerstat.DamageF();
        //float addD = enemy.GetComponent<EnemyStat>().Hp;

        //
        //addD = addD * 0.01f;

        //


        //
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f,0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.GetComponent<EnemySystem>().DefenseMi_Trigger2();
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);
    }
    public void BulletCreate_T_12() // 솔져
    {
        towerstat._animator.Play("Attack");
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = CreatePos.transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;



    }
    public void BulletCreate_T_13() // 나무도끼
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_13_AC(Enemy));





    }


    IEnumerator BulletCreate_T_13_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.15f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);

        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //
        
        addD = addD * 0.015f;

        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }
        _Damage += addD;



        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }


    public void BulletCreate_T_14() //투석기
    {
        towerstat._animator.Play("Attack");
        Invoke("BulletCreate_T_14_at", 0.1f);



    }
    public void BulletCreate_T_14_at() //투석기
    {
        if (Enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            return;
        }
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = CreatePos.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;


    }
    public void BulletCreate_T_15()
    {


        StartCoroutine(trigger_15());


    }
    IEnumerator trigger_15()
    {

        towerstat._animation.Play("Anim_Attack");
        yield return new WaitForSeconds(0.2f);
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];

        }
        yield return new WaitForSeconds(0.3f);
        towerstat._animation.Play("Anim_Idle");
    }
    public void BulletCreate_T_16() // 
    {
        towerstat._animator.Play("Attack");
        Invoke("BulletCreate_T_16_at", 0.25f);
    }
    public void BulletCreate_T_16_at() // 
    {
        if (Enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            return;
        }
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;
        bullet.transform.position=new Vector3(bullet.transform.position.x, 0.5f, bullet.transform.position.z);
        bullet.transform.LookAt(Enemy.transform);
        Destroy(bullet,2f);
    }
    public void BulletCreate_T_17()
    {
        towerstat._animator.Play("Attack");
        GameObject bullet = Instantiate(Bullet00);


        bullet.transform.position = transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;



    }
    public void BulletCreate_T_18()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_18_AC(Enemy));

        



    }
    IEnumerator BulletCreate_T_18_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;


        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        //Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 1f);
        StartCoroutine(rangeDamageTrigger1(gameObject, enemy.transform.position, 1.5f, 0f, towerstat.DamageF()));

    }
    public void BulletCreate_T_19() // 주위 3명까지 공격
    {
        towerstat._animator.Play("Attack");
        int con = 0;
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 3)
            {
            }
            else
            {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];

                

                con++;
            }
        }

    }



    public void BulletCreate_T_20()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_20_AC(Enemy));



    }

    
    IEnumerator BulletCreate_T_20_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        towerstat.AttackCont++;
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
    }


    public void BulletCreate_T_21()
    {
        towerstat._animator.Play("Attack");

        

        StartCoroutine(BulletCreate_T_21_AC(Enemy));


    }

    


    IEnumerator BulletCreate_T_21_AC(GameObject enemy)
    {
        float r;

        yield return new WaitForSeconds(0.33f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        towerstat.AttackCont++;
        
            r=UnityEngine.Random.Range(0f, 100f);
        if (r <= 8f)
        {
            enemy.GetComponent<EnemyStat>().StunGo(2f);

        }

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.33f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());

        yield return new WaitForSeconds(0.33f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        towerstat.AttackCont++;

        r = UnityEngine.Random.Range(0f, 100f);
        if (r <= 8f)
        {
            enemy.GetComponent<EnemyStat>().StunGo(2f);

        }

        GameObject Effect02 = Instantiate(effect[1], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect02.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect02, 0.33f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
    }


    public void BulletCreate_T_22()
    {
        towerstat.AttackCont++;

        Enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());



    }
    public void BulletCreate_T_23()
    {
        towerstat._animator.Play("Attack");

        effect[0].GetComponent<ParticleSystem>().Play();
        effect[1].GetComponent<ParticleSystem>().Play();
        effect[2].GetComponent<ParticleSystem>().Play();
        effect[3].GetComponent<ParticleSystem>().Play();
        effect[4].GetComponent<ParticleSystem>().Play();
        Enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());



    }
    public void BulletCreate_T_24()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_24_AC(Enemy));



    }
    


    IEnumerator BulletCreate_T_24_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        float _Damage = towerstat.DamageF();
        float r = UnityEngine.Random.Range(0f, 100f);
        if (r <= 15f)
        {
            enemy.GetComponent<EnemyStat>().StunGo(2f);

        }



        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }

    public void BulletCreate_T_25()
    {
        towerstat._animator.Play("Attack");


        StartCoroutine(BulletCreate_T_25_AC(Enemy));


    }

    







IEnumerator BulletCreate_T_25_AC(GameObject enemy)
{


        float addD;
        


        yield return new WaitForSeconds(0.33f);
    if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
    {
        yield break;
    }
    towerstat.AttackCont++;
        addD = enemy.GetComponent<EnemyStat>().Hp;

        addD = addD * 0.02f;

        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }



        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
    Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
    Destroy(Effect01, 0.33f);
    enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF()+addD);

    yield return new WaitForSeconds(0.33f);
    if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
    {
        yield break;
    }
    towerstat.AttackCont++;
        addD = enemy.GetComponent<EnemyStat>().Hp;

        addD = addD * 0.02f;

        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }


        GameObject Effect02 = Instantiate(effect[1], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
    Effect02.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
    Destroy(Effect02, 0.33f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF() + addD);
    }

public void BulletCreate_T_26()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_26_AC(Enemy));



    }

    IEnumerator BulletCreate_T_26_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.15f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        GameObject to = Instantiate(effect[0], enemy.transform.position,enemy.transform.rotation);
        to.transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
        Destroy(to, 2f);

        StartCoroutine(rangeDamageTrigger1(gameObject, to.transform.position, 1.5f, 0f, towerstat.DamageF()));
        yield return new WaitForSeconds(0.5f);
        StartCoroutine(rangeDamageTrigger1(gameObject, to.transform.position, 1.5f, 0f, towerstat.DamageF()));
        yield return new WaitForSeconds(0.5f);
        StartCoroutine(rangeDamageTrigger1(gameObject, to.transform.position, 1.5f, 0f, towerstat.DamageF()));
        yield return new WaitForSeconds(0.5f);
        StartCoroutine(rangeDamageTrigger1(gameObject, to.transform.position, 1.5f, 0f, towerstat.DamageF()));

        
    }
    public void BulletCreate_T_27()
    {
        towerstat._animator.Play("Attack");
        //Invoke("BulletCreate_T_27_Ac", 0.15f);

        StartCoroutine(BulletCreate_T_27_Ac());



    }

    IEnumerator BulletCreate_T_27_Ac()
    {
        int con = 0;

        yield return new WaitForSeconds(0.25f);
        towerstat.AttackCont++;
        effect[1].SetActive(true);

        while (con <10)
        {
            con++;
            RaycastHit[] hits = Physics.SphereCastAll(gameObject.transform.position, 0.5f, transform.GetChild(3).transform.forward,10f);

            if (hits.Length > 0)
            {
                for (int i = 0; i < hits.Length; i++)
                {
                    if (hits[i].transform.tag == "Enemy")
                    {
                        hits[i].transform.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
                    }
                }
            }

            yield return new WaitForSeconds(0.1f);
        }
        
        effect[1].SetActive(false);

    }
    public void BulletCreate_T_28()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_28(Enemy));



    }
    IEnumerator BulletCreate_T_28(GameObject enemy)
    {
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());


    }
    public void BulletCreate_T_29() // 9번 주위 3명가지 공격
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_29_ac());



    }
    IEnumerator BulletCreate_T_29_ac()
    {
        yield return new WaitForSeconds(0.25f);
        int con = 0;
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 4)
            {
            }
            else
            {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];



                con++;
            }
        }
    }
    public void BulletCreate_T_30()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_30(Enemy));



    }
    IEnumerator BulletCreate_T_30(GameObject enemy)
    {
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());


    }
    public void BulletCreate_T_31()
    {
        towerstat._animation.Play("Attack01");

        StartCoroutine(BulletCreate_T_31_AC(Enemy));





    }
    IEnumerator BulletCreate_T_31_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            towerstat._animation.Play("Idle");
            yield break;
        }

        towerstat.AttackCont++;


        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        //Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 1f);
        StartCoroutine(rangeDamageTrigger1(gameObject, enemy.transform.position, 1.5f, 0f, towerstat.DamageF()));
        yield return new WaitForSeconds(0.15f);
        towerstat._animation.Play("Idle");

    }
    public void BulletCreate_T_32() // 투석기
    {
        towerstat._animator.Play("Attack");
        Invoke("BulletCreate_T_32_at", 0.15f);



    }
    public void BulletCreate_T_32_at() //투석기
    {
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = CreatePos.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        //z
        bullet.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;


    }
    public void BulletCreate_T_33() // 3명공격
    {
        StartCoroutine(BulletCreate_T_33_ac());



    }
    IEnumerator BulletCreate_T_33_ac()
    {
        GameObject[] Attackenemy =new GameObject[3];
        effect[1].GetComponent<Animation>().Play("Attack");
        effect[2].GetComponent<Animation>().Play("Attack");
        effect[3].GetComponent<Animation>().Play("Attack");
        yield return new WaitForSeconds(0.2f);
        int con = 0;
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 3)
            {
            }
            else
            {
                Attackenemy[con]= tower_controll.enemies[i];
                con++;
            }
        }
        if (con >=3)
        {
            GameObject bullet = Instantiate(Bullet00);
            bullet.transform.position = CreatePos.position;
            bullet.GetComponent<BulletState>().MyTower = gameObject;
            bullet.GetComponent<BulletState>().Target = Attackenemy[0];

            GameObject bullet2= Instantiate(Bullet00);
            bullet2.transform.position = CreatePos2.position;
            bullet2.GetComponent<BulletState>().MyTower = gameObject;
            bullet2.GetComponent<BulletState>().Target = Attackenemy[1];

            GameObject bullet3 = Instantiate(Bullet00);
            bullet3.transform.position = CreatePos3.position;
            bullet3.GetComponent<BulletState>().MyTower = gameObject;
            bullet3.GetComponent<BulletState>().Target = Attackenemy[2];


        }
        else if (con == 2)
        {
            GameObject bullet = Instantiate(Bullet00);
            bullet.transform.position = CreatePos.position;
            bullet.GetComponent<BulletState>().MyTower = gameObject;
            bullet.GetComponent<BulletState>().Target = Attackenemy[0];

            GameObject bullet2 = Instantiate(Bullet00);
            bullet2.transform.position = CreatePos2.position;
            bullet2.GetComponent<BulletState>().MyTower = gameObject;
            bullet2.GetComponent<BulletState>().Target = Attackenemy[1];

            GameObject bullet3 = Instantiate(Bullet00);
            bullet3.transform.position = CreatePos3.position;
            bullet3.GetComponent<BulletState>().MyTower = gameObject;
            bullet3.GetComponent<BulletState>().Target = Attackenemy[0];
        }
        else if (con == 1)
        {
            GameObject bullet = Instantiate(Bullet00);
            bullet.transform.position = CreatePos.position;
            bullet.GetComponent<BulletState>().MyTower = gameObject;
            bullet.GetComponent<BulletState>().Target = Attackenemy[0];

            GameObject bullet2 = Instantiate(Bullet00);
            bullet2.transform.position = CreatePos2.position;
            bullet2.GetComponent<BulletState>().MyTower = gameObject;
            bullet2.GetComponent<BulletState>().Target = Attackenemy[0];

            GameObject bullet3 = Instantiate(Bullet00);
            bullet3.transform.position = CreatePos3.position;
            bullet3.GetComponent<BulletState>().MyTower = gameObject;
            bullet3.GetComponent<BulletState>().Target = Attackenemy[0];
        }
        yield return new WaitForSeconds(0.3f);
        effect[1].GetComponent<Animation>().Play("Idle");
        effect[2].GetComponent<Animation>().Play("Idle");
        effect[3].GetComponent<Animation>().Play("Idle");
    }
    public void BulletCreate_T_34() // 나무도끼
    {
        towerstat._animation.Play("Attack01");
        
        StartCoroutine(BulletCreate_T_34_AC(Enemy));





    }


    IEnumerator BulletCreate_T_34_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.15f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            towerstat._animation.Play("Idle");
            yield break;
        }
        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);

        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //

        addD = addD * 0.025f;

        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }
        _Damage += addD;



        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);
        yield return new WaitForSeconds(0.15f);
        towerstat._animation.Play("Idle");
    }
    public void BulletCreate_T_35() // 35번 사거리내 모두 공격
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_35_ac(Enemy));

    }
    IEnumerator BulletCreate_T_35_ac(GameObject enemy)
    {

       
        if (enemy != null)
        {
            GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
            Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
            Destroy(Effect01, 0.5f);
            GameObject bullet1 = Instantiate(Bullet00);
            bullet1.transform.position = transform.position;
            bullet1.GetComponent<BulletState>().MyTower = gameObject;
            bullet1.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;
        }

        yield return new WaitForSeconds(0.33f);
        if (enemy != null)
        {
            GameObject Effect02 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
            Effect02.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
            Destroy(Effect02, 0.5f);
            GameObject bullet1 = Instantiate(Bullet00);
            bullet1.transform.position = transform.position;
            bullet1.GetComponent<BulletState>().MyTower = gameObject;
            bullet1.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;
        }
        yield return new WaitForSeconds(0.33f);
        if (enemy != null)
        {
            GameObject Effect03 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
            Effect03.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
            Destroy(Effect03, 0.5f);
            GameObject bullet1 = Instantiate(Bullet00);
            bullet1.transform.position = transform.position;
            bullet1.GetComponent<BulletState>().MyTower = gameObject;
            bullet1.GetComponent<BulletState>().Target = GetComponent<Tower_Controll>().targetObject;
        }
    }
    public void BulletCreate_T_36()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_36_AC(Enemy));





    }
    IEnumerator BulletCreate_T_36_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;


        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), Quaternion.Euler(new Vector3(-90f,0f,0f)));
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        StartCoroutine(rangeDamageTrigger1(gameObject, enemy.transform.position, 1.5f, 0f, towerstat.DamageF()));

    }
    public void BulletCreate_T_37()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_37(Enemy));



    }
    IEnumerator BulletCreate_T_37(GameObject enemy)
    {
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());


    }
    public void BulletCreate_T_38() // 나무도끼
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_38_AC(Enemy));





    }


    IEnumerator BulletCreate_T_38_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.25f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
        Destroy(Effect01, 0.5f);

        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //

        addD = addD * 0.030f;

        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }
        _Damage += addD;



        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);
    }
    public void BulletCreate_T_39()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_39_AC(Enemy));





    }
    IEnumerator BulletCreate_T_39_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;


        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), Quaternion.Euler(new Vector3(-90f, 0f, 0f)));
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        StartCoroutine(rangeDamageTrigger1(gameObject, enemy.transform.position, 1.5f, 0f, towerstat.DamageF()));

    }
    public void BulletCreate_T_40() // 주위 3명 공격
    {
        StartCoroutine(BulletCreate_T_40_ac());


    }
    IEnumerator BulletCreate_T_40_ac()
    {
        towerstat._animator.Play("Attack");

        yield return new WaitForSeconds(0.2f);
        GameObject Effect01 = Instantiate(effect[1], transform.position + new Vector3(0f, 0.3f, 0f), transform.GetChild(3).transform.rotation);
        Effect01.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
        Destroy(Effect01, 0.5f);
        int con = 0;
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 4)
            {
            }
            else
            {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];



                con++;
            }
        }
    }
    public void BulletCreate_T_41()
    {
        towerstat._animation.Play("Attack01");
        StartCoroutine(BulletCreate_T_41_Ac(Enemy));




    }
    IEnumerator BulletCreate_T_41_Ac(GameObject enemy)
    {
        
        yield return new WaitForSeconds(0.3f);

        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            towerstat._animation.Play("Idle");
            yield break;
        }
        towerstat.AttackCont++;
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
        Destroy(Effect01, 0.5f);
        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //
        float time = 0.2f;
        //
        float r = UnityEngine.Random.Range(0f, 100f);
        if (r <= 20f)
        {
            enemy.GetComponent<EnemyStat>().StunGo(2f);

        }
        StartCoroutine(DamageTime(gameObject, enemy, time, _Damage));
        yield return new WaitForSeconds(0.15f);
        towerstat._animation.Play("Idle");
    }
    public void BulletCreate_T_42()
    {
        towerstat._animation.Play("Attack01");

        StartCoroutine(BulletCreate_T_42_AC(Enemy));





    }
    IEnumerator BulletCreate_T_42_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.50f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            towerstat._animation.Play("free");
            yield break;
        }

        towerstat.AttackCont++;


        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), Quaternion.Euler(new Vector3(-90f, 0f, 0f)));
        //Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 1f);
        StartCoroutine(rangeDamageTrigger1(gameObject, enemy.transform.position, 1.5f, 0f, towerstat.DamageF()));
        yield return new WaitForSeconds(0.50f);
        towerstat._animation.Play("free");

    }
    public void BulletCreate_T_43()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_43_Ac(Enemy));




    }
    IEnumerator BulletCreate_T_43_Ac(GameObject enemy)
    {

        yield return new WaitForSeconds(0.3f);

        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            
            yield break;
        }
        towerstat.AttackCont++;
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
        Destroy(Effect01, 0.5f);
        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //
        float time = 0.2f;
        //
        float r = UnityEngine.Random.Range(0f, 100f);
        if (r <= 20f)
        {
            enemy.GetComponent<EnemyStat>().StunGo(2f);

        }
        StartCoroutine(DamageTime(gameObject, enemy, time, _Damage));
    }

    public void BulletCreate_T_44()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_44_Ac(Enemy));




    }
    IEnumerator BulletCreate_T_44_Ac(GameObject enemy)
    {


        	float _Damage = towerstat.DamageF();
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }


        towerstat.AttackCont++;
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 1f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);


    }
    public void BulletCreate_T_45()
    {
        StartCoroutine(BulletCreate_T_45_ac());



    }
    IEnumerator BulletCreate_T_45_ac()
    {

        towerstat._animator.Play("Attack");

        yield return new WaitForSeconds(0.2f);
        int con = 0;
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
            if (con >= 4)
            {
            }
            else
            {

                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];



                con++;
            }
        }
    }
    public void BulletCreate_T_46() // 나무도끼
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_46_AC(Enemy));





    }


    IEnumerator BulletCreate_T_46_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.25f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        towerstat.AttackCont++;

        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
        Destroy(Effect01, 0.5f);

        float _Damage = towerstat.DamageF();
        float addD = enemy.GetComponent<EnemyStat>().Hp;

        //

        addD = addD * 0.030f;

        //

        if (enemy.GetComponent<EnemyStat>().Boss)
        {
            addD = addD / 2;
        }
        _Damage += addD;



        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);
    }
    public void BulletCreate_T_47()
    {
        towerstat._animator.Play("Attack");

        effect[0].GetComponent<ParticleSystem>().Play();
        effect[1].GetComponent<ParticleSystem>().Play();
        effect[2].GetComponent<ParticleSystem>().Play();
        effect[3].GetComponent<ParticleSystem>().Play();
        effect[4].GetComponent<ParticleSystem>().Play();
        Enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());



    }
    public void BulletCreate_T_48()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_48_AC(Enemy));



    }



    IEnumerator BulletCreate_T_48_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.30f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        float _Damage = towerstat.DamageF();
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }
    

    public void BulletCreate_T_49()
    {
        towerstat.AttackCont++;
        
        Enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
        if (my_coroutine_is_running[0]==false)
        {

        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_49_ac());
        }



    }
    IEnumerator BulletCreate_T_49_ac()
    {
        my_coroutine_is_running[0] = true;
        yield return new WaitUntil(() => gameObject.GetComponent<Tower_Controll>().enemies.Count == 0);
        towerstat._animator.Play("Idle");
        my_coroutine_is_running[0] = false;
    }


    public void BulletCreate_T_50()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_50_AC(Enemy));



    }



    IEnumerator BulletCreate_T_50_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.2f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        float _Damage = towerstat.DamageF();
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }

    public void BulletCreate_T_51()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_51_AC(Enemy));



    }



    IEnumerator BulletCreate_T_51_AC(GameObject enemy)
    {
        yield return new WaitForSeconds(0.20f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;

        float _Damage = towerstat.DamageF();
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }

    public void BulletCreate_T_52()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_52_AC(Enemy));



    }



    IEnumerator BulletCreate_T_52_AC(GameObject enemy)
    {
        float f = UnityEngine.Random.Range(0f, 100f);
        yield return new WaitForSeconds(0.15f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;


        float _Damage = towerstat.DamageF();

        if (f <= 15)
        {
            _Damage = _Damage*2;
        }
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }



    public void BulletCreate_T_53() // 
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_53_AC(Enemy));
    }
    IEnumerator BulletCreate_T_53_AC(GameObject enemy) // 
    {
        yield return new WaitForSeconds(0.25f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        bullet.GetComponent<BulletState>().Target = enemy;
        bullet.transform.position = new Vector3(bullet.transform.position.x, 0.5f, bullet.transform.position.z);
        bullet.transform.LookAt(Enemy.transform);
        Destroy(bullet, 2f);
    }





    public void BulletCreate_T_54()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_54_AC(Enemy));



    }



    IEnumerator BulletCreate_T_54_AC(GameObject enemy)
    {
        float f = UnityEngine.Random.Range(0f, 100f);
        yield return new WaitForSeconds(0.3f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;


        float _Damage = towerstat.DamageF();

        
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        if (towerstat.AttackCont==1)
        {

        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage,towerstat.DoubleAtPerF());
        }
        else
        {
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

        }

    }


    public void BulletCreate_T_55() // 
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_55_AC(Enemy));
    }
    IEnumerator BulletCreate_T_55_AC(GameObject enemy) // 
    {
        yield return new WaitForSeconds(0.25f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }
        GameObject bullet = Instantiate(Bullet00);
        bullet.transform.position = transform.position;
        bullet.GetComponent<BulletState>().MyTower = gameObject;
        bullet.GetComponent<BulletState>().Target = enemy;
        bullet.transform.position = new Vector3(bullet.transform.position.x, 0.5f, bullet.transform.position.z);
        bullet.transform.LookAt(Enemy.transform);
        Destroy(bullet, 2f);
    }


    public void BulletCreate_T_56()
    {
        towerstat._animator.Play("Attack");
        StartCoroutine(BulletCreate_T_56_AC(Enemy));



    }



    IEnumerator BulletCreate_T_56_AC(GameObject enemy)
    {
        float f = UnityEngine.Random.Range(0f, 100f);
        yield return new WaitForSeconds(0.15f);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead)
        {
            yield break;
        }

        towerstat.AttackCont++;


        float _Damage = towerstat.DamageF();

        if (f <= 15)
        {
            _Damage = _Damage * 2;
        }
        GameObject Effect01 = Instantiate(effect[0], enemy.transform.position + new Vector3(0f, 0.3f, 0f), enemy.transform.rotation);
        Effect01.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        Destroy(Effect01, 0.5f);
        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(gameObject, _Damage);

    }


    public void BulletCreate_T_57()
    {
        StartCoroutine(BulletCreate_T_57_ac());



    }
    IEnumerator BulletCreate_T_57_ac()
    {

        towerstat._animator.Play("Attack");

        yield return new WaitForSeconds(0.15f);
        for (int i = 0; i < tower_controll.enemies.Count; i++)
        {
 


                GameObject bullet = Instantiate(Bullet00);
                bullet.transform.position = transform.position;
                bullet.GetComponent<BulletState>().MyTower = gameObject;
                //z
                bullet.GetComponent<BulletState>().Target = tower_controll.enemies[i];




        }
    }

    public void BulletCreate_T_58()
    {
        //towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_58_Ac());



    }

    IEnumerator BulletCreate_T_58_Ac()
    {
        int con = 0;

        yield return new WaitForSeconds(0.25f);
        towerstat.AttackCont++;
        effect[1].SetActive(true);

        while (con < 5)
        {
            con++;
            RaycastHit[] hits = Physics.SphereCastAll(gameObject.transform.position, 0.5f, transform.GetChild(3).transform.forward,3f);

            if (hits.Length > 0)
            {
                for (int i = 0; i < hits.Length; i++)
                {
                    if (hits[i].transform.tag == "Enemy")
                    {
                        hits[i].transform.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
                    }
                }
            }

            yield return new WaitForSeconds(0.1f);
        }

        effect[1].SetActive(false);

    }

    public void BulletCreate_T_59()
    {
        towerstat._animator.Play("Attack");

        StartCoroutine(BulletCreate_T_59_Ac());



    }

    IEnumerator BulletCreate_T_59_Ac()
    {

        yield return new WaitForSeconds(0.10f);
        towerstat.AttackCont++;
        effect[1].SetActive(true);

        RaycastHit[] hits = Physics.SphereCastAll(gameObject.transform.position, 0.5f, transform.GetChild(3).transform.forward,3f);

        if (hits.Length > 0)
        {
            for (int i = 0; i < hits.Length; i++)
            {
                if (hits[i].transform.tag == "Enemy")
                {
                    hits[i].transform.GetComponent<EnemyStat>().DamageTrigger(gameObject, towerstat.DamageF());
                }
            }
        }



        yield return new WaitForSeconds(0.1f);


        effect[1].SetActive(false);

    }

    public IEnumerator DamageTime(GameObject tower,GameObject enemy,float time,float damage,float AddCriP=0f,float AddCriD=0f)
    {
        yield return new WaitForSeconds(time);
        if (enemy.gameObject.GetComponent<EnemyStat>().Dead == false)
        {


        enemy.gameObject.GetComponent<EnemyStat>().DamageTrigger(tower, damage, AddCriP, AddCriD);
        }
    }


    public IEnumerator rangeDamageTrigger1(GameObject tower,Vector3 pos,float ras, float t,float Damage,float AddCriP=0f,float AddCriD=0f)
    {

        yield return new WaitForSeconds(t);
        //Debug.Log("실행");

        Collider[] hits = Physics.OverlapSphere(pos, ras);
        if (hits.Length >0)
        {
            for (int i = 0; i < hits.Length; i++)
            if (hits[i].gameObject.tag=="Enemy")
            {
        hits[i].gameObject.GetComponent<EnemyStat>().DamageTrigger(tower, Damage, AddCriP, AddCriD);

            }
        }

    }



    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        tower_controll = gameObject.GetComponent<Tower_Controll>();
        towerstat = gameObject.GetComponent<TowerStat>();
    }

    protected static Vector3 Parabola(Vector3 start, Vector3 end, float height, float t)
    {
        Func<float, float> f = x => -4 * height * x * x + 4 * height * x;

        var mid = Vector3.Lerp(start, end, t);

        return new Vector3(mid.x, f(t) + Mathf.Lerp(start.y, end.y, t), mid.z);
    }

    IEnumerator BulletMove(GameObject gameObject, GameObject targetObject, float height, float du)
    {
        Vector3 startPos = gameObject.transform.position;
        float timer = 0;
        while (Vector3.Distance(gameObject.transform.position, targetObject.transform.position) > 0.5)
        {
            if (targetObject == null || targetObject.GetComponent<EnemyStat>().Dead)
            {
                break;
            }
            timer += Time.deltaTime;
            Vector3 tempPos = Parabola(startPos, targetObject.transform.position, height + startPos.y, timer / du);
            gameObject.transform.position = tempPos;
            yield return new WaitForEndOfFrame();
        }
    }
    IEnumerator BulletMove2(GameObject gameObject, Vector3 endpos, float height, float du)
    {
        Vector3 startPos = gameObject.transform.position;
        float timer = 0;
        while (Vector3.Distance(gameObject.transform.position, endpos) > 0.5)
        {
            timer += Time.deltaTime;
            Vector3 tempPos = Parabola(startPos, endpos, height + startPos.y, timer / du);
            gameObject.transform.position = tempPos;
            yield return new WaitForEndOfFrame();
        }
    }



}
