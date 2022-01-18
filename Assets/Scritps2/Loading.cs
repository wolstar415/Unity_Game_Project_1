using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class Loading : MonoBehaviour
{
    static string nextScene;


    public Slider slider;
    public TextMeshProUGUI text;

    public static void LoadScene(string sceneName)
    {
        nextScene = sceneName;
        SceneManager.LoadScene("Loading");
    }
    void Start()
    {
        StartCoroutine(LoadSceneProcess());
    }

    IEnumerator LoadSceneProcess()
    {
      AsyncOperation op =  SceneManager.LoadSceneAsync(nextScene);
        op.allowSceneActivation = false;

        float timer = 0f;
        while (!op.isDone)
        {
            yield return null;
            if (op.progress < 0.9f)
            {
                Debug.Log(op.progress);

                slider.value = op.progress;
                text.text = (slider.value*100).ToString("F0") + "%";
            }
            else
            {
                timer += Time.unscaledDeltaTime;
                slider.value = Mathf.Lerp(0.9f, 1f, timer);
                text.text = (slider.value * 100).ToString("F0") + "%";
                if (slider.value >= 1f)
                {
                    GameObject.Find("Game_Setting").GetComponent<AudioSource>().Stop();
                    op.allowSceneActivation = true;
                    yield break;
                }
            }
        }
    }

}
