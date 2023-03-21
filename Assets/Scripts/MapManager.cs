using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
public class MapManager : MonoBehaviour
{
    public RawImage mapRawImage;

    [Header("¸Ê Á¤º¸ ÀÔ·Â")]
    public string strBaseURL = "";
    public string latitude = "";
    public string longitude = "";
    public int level = 14;
    public int mapWidth;
    public int mapHeight;
    public string strAPIKey = "";
    public string secretKey = "";
    public GPS gps;
    public Vector2 gpsVec;
    public Vector2 TempgpsVec;
    public GameObject MapPin;
    public bool OnClickPlusMinusButton = false;
    public bool MapCloseUp = false;
    public bool MapCloseUpSetting = false;
    [SerializeField] private Image Plus;
    [SerializeField] private Image Minus;
    [SerializeField] private GameManagmont GameManager;
    public Image MapPinImage;
    private void Start()
    {
        
    }
    private void FixedUpdate()
    {
        gpsVec = gps.GetGPS();
        if(gpsVec != TempgpsVec || OnClickPlusMinusButton || MapCloseUpSetting)
        {
            MapCloseUpSetting = false;
            OnClickPlusMinusButton = false;
            TempgpsVec = gpsVec;
        latitude = gpsVec.x.ToString();
        longitude = gpsVec.y.ToString();
        StartCoroutine(MapLoader());
        }
    }
    IEnumerator MapLoader()
    {
        string str = strBaseURL + "?w=" + mapWidth.ToString() + "&h=" + mapHeight.ToString() + "&center=" + longitude + "," + latitude + "&level=" + level.ToString();

        Debug.Log(str.ToString());

        UnityWebRequest request = UnityWebRequestTexture.GetTexture(str);

        request.SetRequestHeader("X-NCP-APIGW-API-KEY-ID", strAPIKey);
        request.SetRequestHeader("X-NCP-APIGW-API-KEY", secretKey);

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(request.error);
        }
        else
        {
            mapRawImage.gameObject.SetActive(true);
            MapPin.SetActive(true);
            Plus.gameObject.SetActive(true);
            Minus.gameObject.SetActive(true);
            mapRawImage.texture = DownloadHandlerTexture.GetContent(request);
        }
    }
    public void OnClickMapPlusButton()
    {
        if (level >= 20)
            return;
        level++;
        OnClickPlusMinusButton = true;
    }
    public void OnClickMapMinusButton()
    {
        if (level <= 16)
            return;
        level--;
        OnClickPlusMinusButton = true;
    }
    public void OnClickMapButton()
    {
        Debug.Log("¸Ê Å©±â Áõ°¡");
        if (!GameManager.isSetting && !GameManager.isExplain)
        {
            if (!MapCloseUp)
            {
                MapCloseUp = true;
                MapCloseUpSetting = true;
                mapRawImage.rectTransform.anchoredPosition = new Vector2(0, 0);
                mapRawImage.rectTransform.sizeDelta = new Vector2(600, 600);
                Plus.rectTransform.anchoredPosition = new Vector2(383, 174);
                Minus.rectTransform.anchoredPosition = new Vector2(383, -228);
                MapPinImage.rectTransform.anchoredPosition = new Vector2(0, 0);
            }
            else
            {
                MapCloseUp = false;
                MapCloseUpSetting = false;
                mapRawImage.rectTransform.anchoredPosition = new Vector2(-339, -938);
                mapRawImage.rectTransform.sizeDelta = new Vector2(400, 400);
                Plus.rectTransform.anchoredPosition = new Vector2(-58, -801);
                Minus.rectTransform.anchoredPosition = new Vector2(-58, -1065);
                MapPinImage.rectTransform.anchoredPosition = new Vector2(-341, -922);

            }
        }
    }
}
