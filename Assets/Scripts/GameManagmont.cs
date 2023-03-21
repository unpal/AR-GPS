using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
 public class GameManagmont : MonoBehaviour
{
    [SerializeField] GameObject[] Explain;
    [SerializeField] int ProcedureOfExplain = 0;
    [SerializeField] GameObject ExplainCnavas;
    [SerializeField] GameObject Setting;
    [SerializeField] Slider LoadingBar;
    [SerializeField] GameObject CrossHair;
    public TMP_Text CountSlime;
    public bool isExplain = false;
    public bool isSetting = false;
    public int CountSlime_int = 4;
    void Start()
    {
        isExplain = true;
        StartCoroutine(StartExplain());
        CountSlime.gameObject.SetActive(false);
        CrossHair.SetActive(false);
    }
    public void OnClickExplainNextButton()
    {
        if (Explain.Length < ProcedureOfExplain)
            return;
        ProcedureOfExplain++;
        for (int i = 0; i < Explain.Length; i++)
            if (Explain[i].activeSelf)
                Explain[i].SetActive(false);
        Explain[ProcedureOfExplain].SetActive(true);
        if(!isExplain)
        isExplain = true;
    }
    public void OnClickExplainEndButton()
    {
        isExplain = false;
        ProcedureOfExplain++;
        ExplainCnavas.SetActive(false);
        if (ProcedureOfExplain == 7)
            CrossHair.SetActive(true);
    }
    public void ShowExplain(int index)
    {
        isExplain = true;
        ExplainCnavas.SetActive(true);
        for (int i = 0; i < Explain.Length; i++)
            if (Explain[i].activeSelf)
                Explain[i].SetActive(false);
        Explain[index].SetActive(true);
        CrossHair.SetActive(false);
    }
    public void ShowSetting()
    {
        if (!isExplain)
        {
            if (isSetting)
            {
                Setting.SetActive(false);
                isSetting = false;
            }
            else
            {
                Setting.SetActive(true);
                isSetting = true;
            }
        }
    }
    public void ExitSetting()
    {
        isSetting = false;
        Setting.SetActive(false);
    }
    public void ExitGame()
    {
        Application.Quit();
    }
    public void GoMainMenu()
    {
        if (isSetting)
            Setting.SetActive(false);
            ExplainCnavas.SetActive(false);
        StartCoroutine(LoadingScene());
    }
    IEnumerator LoadingScene()
    {
        LoadingBar.gameObject.SetActive(true);
        AsyncOperation loading = SceneManager.LoadSceneAsync("MainMenuScene");

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
                timer += Time.unscaledTime*Time.deltaTime;
                LoadingBar.value = Mathf.Lerp(0.9f, 1f, timer);
                if (LoadingBar.value >= 1f)
                {
                    loading.allowSceneActivation = true;
                    yield break;
                }
            }
        }
    }
    IEnumerator StartExplain()
    {
        yield return new WaitForSeconds(3);
        ShowExplain(0);
        
    }
    public void SlimeCount()
    {
        CountSlime_int--;
        if(CountSlime_int <= 0)
        {
            CountSlime.gameObject.SetActive(false);
        }
        CountSlime.text = "남은 슬라임 : " + CountSlime_int.ToString();
    }
}
