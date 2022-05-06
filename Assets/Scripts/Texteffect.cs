using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Texteffect : MonoBehaviour
{
    public GameObject TextUi;
    public Transform parentTransform;
    public static Texteffect inst;
    private void Awake()
    {
        inst = this;
    }
    public void T_Effect(string text,Color color,Vector3 pos,float s=1.0f)
    {
        GameObject clone = Instantiate(TextUi);
        clone.transform.SetParent(parentTransform);

        clone.GetComponent<UIHUDText>().Play2(text, color, pos);
        clone.transform.localScale=new Vector3(s,s,s);
    }
}
