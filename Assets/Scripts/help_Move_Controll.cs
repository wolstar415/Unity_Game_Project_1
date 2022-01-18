using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class help_Move_Controll : MonoBehaviour
{
    public List<Transform> moveListTarnsform;
    public Transform moveTarnsform;
    public CharacterController EnemyChar;
    public float rotationSpeed = 15f;
    public float movespeed = 300f;
    public int movenum =0;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        EnemyChar = gameObject.GetComponent<CharacterController>();

        for (int i = 1; i <= 11; i++)
        {
            moveListTarnsform.Add(GameObject.Find("EnemyNode" + i).transform);

        }
    }

    
    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        moveTarnsform = moveListTarnsform[movenum];
        float Distance = Vector3.Distance(transform.position, moveTarnsform.position);
        Vector3 dir = moveTarnsform.position - transform.position;
        dir.y = 0;
        dir.Normalize();


        gameObject.transform.position = Vector3.MoveTowards(transform.position, moveTarnsform.position, Time.deltaTime * movespeed*0.01f);
        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(dir), rotationSpeed * Time.deltaTime);

        //Debug.Log(Distance);
        if (Distance < 0.1f)
        {
            movenum++;
            //moveListTarnsform.RemoveAt(0);
        }
        if (movenum >= 11)
        {
            GameObject.Find("EnemyCreate").GetComponent<EnemyCreate_Controll>().RoundStart();
            Destroy(gameObject);

        }
    }

}
