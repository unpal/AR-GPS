using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;
using TMPro;
public class GPS : MonoBehaviour
{
    public static GPS instance;
    public float maxWaitTime = 10.0f;
    public float resendTime = 1;

    //위도 경도 변경
    public float latitude = 0;
    public float longitude = 0;
    float waitTime = 0;

    public Vector3 UCS;
    public bool receiveGPS = false;
    public Vector2 GPSOrigin;

    public bool isGPSOrigin = false;
    [SerializeField] private GameObject Slime;
    [SerializeField] private GameObject[] SpawnPoint;
    public Vector3 UCS_Go;
    public bool isGo;
    [SerializeField] private TouchObject touchslime;
    [SerializeField] private GameManagmont GameManager;
    [SerializeField] private BGMManager bgm;
    [SerializeField] private GameObject SettingButton;
    [SerializeField] private GameObject GunObject;
    [SerializeField] private MapManager mapmanager;
    [SerializeField] private GameObject Navi;
    public int CountSlime = 0;
    public bool LastExplain = false;
    private void Awake()
    {
        GunObject.SetActive(false);
        if (instance == null)
        {
            instance = this;
        }
    }
    void Start()
    {
        StartCoroutine(GPS_On());
    }

    //GPS처리 함수
    public IEnumerator GPS_On()
    {
        //만일,GPS사용 허가를 받지 못했다면, 권한 허가 팝업을 띄움
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        //만일 GPS 장치가 켜져 있지 않으면 위치 정보를 수신할 수 없다고 표시
        if (!Input.location.isEnabledByUser)
        {
            yield break;
        }

        //위치 데이터를 요청 -> 수신 대기
        Input.location.Start();

        //GPS 수신 상태가 초기 상태에서 일정 시간 동안 대기함
        while (Input.location.status == LocationServiceStatus.Initializing && waitTime < maxWaitTime)
        {
            yield return new WaitForSeconds(1.0f);
            waitTime++;
        }

        //수신 실패 시 수신이 실패됐다는 것을 출력
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            yield break;
        }

        //응답 대기 시간을 넘어가도록 수신이 없었다면 시간 초과됐음을 출력
        if (waitTime >= maxWaitTime)
        {
            yield break;
        }

        //수신된 GPS 데이터를 화면에 출력/

        LocationInfo li = Input.location.lastData;
        //위치 정보 수신 시작 체크
        receiveGPS = true;

        //위치 데이터 수신 시작 이후 resendTime 경과마다 위치 정보를 갱신하고 출력
            while (receiveGPS)
            {                                                                                                                                            
                li = Input.location.lastData;
                latitude = li.latitude;
                longitude = li.longitude;
                if (!isGPSOrigin)
                {
                    isGPSOrigin = true;
                    GPSOrigin = new Vector2(latitude, longitude);
                    GPSEncoder.SetLocalOrigin(GPSOrigin);
                }
            SettingButton.SetActive(true);
                UCS = GPSEncoder.GPSToUCS(latitude, longitude);
            if (!GameManager.isExplain&&!GameManager.isSetting)
            {
                if (!isGo && ((UCS_Go.z < UCS.z || UCS_Go.x < UCS.x)||(-UCS_Go.z>UCS.z||-UCS_Go.x>UCS.x))) //  지정해준 좌표까지 간다면 슬라임 생성
                {
                    if (mapmanager.MapCloseUp)
                        mapmanager.OnClickMapButton();
                    else
                    isGo = true;
                        bgm.SetBgmBattle();
                        GunObject.SetActive(true);
                        GameManager.CountSlime.gameObject.SetActive(true);
                        GameManager.CountSlime.text = "남은 슬라임 수 : " + GameManager.CountSlime_int.ToString();
                    for (int i = 0; i < 4; i++)
                    {
                        Instantiate(Slime, SpawnPoint[i].transform.position, SpawnPoint[i].transform.rotation).transform.parent = SpawnPoint[i].transform;
                        CountSlime++;
                    }
                        Navi.SetActive(true);
                    GameManager.ShowExplain(4);
                }
                else if (isGo&&CountSlime <= 0&&!LastExplain)
                {
                    LastExplain = true;
                    GameManager.ShowExplain(7);
                    GunObject.SetActive(false);
                }
            }
                yield return null;
        }
    }
    public Vector2 GetGPS()
    {
        return new Vector2(latitude, longitude);
    }
}
