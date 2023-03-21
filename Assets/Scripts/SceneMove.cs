using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class SceneMove : MonoBehaviour
{
    [SerializeField] GameObject StartMenu;
    [SerializeField] Slider LoadingBar;
    private void Start()
    {
        LoadingBar.gameObject.SetActive(false);
    }
    public void StartGame()
    {
        StartMenu.SetActive(false);
        StartCoroutine(LoadingScene());
    }
    public void ExitGame()
    {
        Application.Quit();
    }
    IEnumerator LoadingScene()
    {
        LoadingBar.gameObject.SetActive(true);
        AsyncOperation loading = SceneManager.LoadSceneAsync("MainScene");

        loading.allowSceneActivation = false;

        float timer = 0f;
        while (!loading.isDone)
        {
            yield return null;

            if (loading.progress < 0.9f)
            {
                LoadingBar.value = loading.progress;
            }
            else
            {
                timer += Time.unscaledTime;
                LoadingBar.value = Mathf.Lerp(0.9f, 1f, timer);
                if (LoadingBar.value >= 1f)
                {
                    loading.allowSceneActivation = true;
                    yield break;
                }
            }
        }
    }
}
