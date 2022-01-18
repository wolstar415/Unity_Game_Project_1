using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class touchMove : MonoBehaviour
{
    public float f;
    public Vector3 posz;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {

    }


    void Update() // 매 프레임마다 실행되는 함수입니다.
    {
        //if (Input.GetKey(KeyCode.UpArrow))
        //{
        //    f = 1;
        //    transform.position = transform.position + new Vector3(0, 0, Time.deltaTime * f * 8);
        //    if (transform.position.z > -5.3)
        //    {
        //        transform.position = new Vector3(transform.position.x, transform.position.y, -5.3f);
        //    }

        //}
        //else if (Input.GetKey(KeyCode.DownArrow))
        //{
        //    f = -1;
        //    transform.position = transform.position + new Vector3(0, 0, Time.deltaTime * f * 8);
        //    if (transform.position.z < -10.5)
        //    {
        //        transform.position = new Vector3(transform.position.x, transform.position.y, -10.5f);
        //    }
        //}
        //else
        //{
        //    f = 0;
        //}

        if (Input.GetMouseButtonDown(0))
        {
            posz = Input.mousePosition;
            
        }
        if (Input.GetMouseButton(0))
        {
            if (posz.y < Input.mousePosition.y)
            {
                    transform.position = transform.position + new Vector3(0, 0, Time.deltaTime * 1 * 8);
                    if (transform.position.z > -5.3)
                    {
                        transform.position = new Vector3(transform.position.x, transform.position.y, -5.3f);
                    }
            }
            if (posz.y > Input.mousePosition.y)
            {

                        transform.position = transform.position + new Vector3(0, 0, Time.deltaTime * -1 * 8);
                        if (transform.position.z < -10.5)
                        {
                            transform.position = new Vector3(transform.position.x, transform.position.y, -10.5f);
                       }
            }
        }

        


    }

}
