using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UIHUDText : MonoBehaviour
{
    [SerializeField]
    float moveDistance = 100;
    [SerializeField]
    float moveTime = 1f;

    RectTransform rectTransform;
    TextMeshProUGUI textHUD;
    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        Destroy(gameObject,1.5f);
    }

    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
        textHUD = GetComponent<TextMeshProUGUI>();
    }

    public void Play(string text, Color color, Bounds bounds, float gap = 0.1f)
    {
        textHUD.text = text;
        textHUD.color = color;
        StartCoroutine(OnHUDText(bounds, gap));
    }
    public void Play2(string text, Color color, Vector3 pos, float gap = 0.1f)
    {
        textHUD.text = text;
        textHUD.color = color;
        StartCoroutine(OnHUDText2(pos, gap));
    }

    IEnumerator OnHUDText2(Vector3 pos, float gap)
    {
        Vector2 start = Camera.main.WorldToScreenPoint(new Vector3(pos.x, pos.y + gap, pos.z));
        Vector2 end = start + Vector2.up * moveDistance;

        float current = 0f;
        float percent = 0f;

        while (percent < 1)

        {
            current += Time.deltaTime;
            percent = current / moveTime;

            rectTransform.position = Vector2.Lerp(start, end, percent);
            Color color = textHUD.color;
            color.a = Mathf.Lerp(1, 0, percent);
            textHUD.color = color;

            yield return null;



        }
    }

    IEnumerator OnHUDText(Bounds bounds, float gap)
    {
        Vector2 start = Camera.main.WorldToScreenPoint(new Vector3(bounds.center.x,bounds.max.y+gap,bounds.center.z));
        Vector2 end = start + Vector2.up * moveDistance;

        float current = 0f;
        float percent = 0f;

        while (percent <1)

        {
            current += Time.deltaTime;
            percent = current / moveTime;

            rectTransform.position = Vector2.Lerp(start,end,percent);
            Color color = textHUD.color;
            color.a = Mathf.Lerp(1,0,percent);
            textHUD.color = color;

            yield return null;



        }
    }

}
