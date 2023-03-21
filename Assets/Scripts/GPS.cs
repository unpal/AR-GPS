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

    //���� �浵 ����
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

    //GPSó�� �Լ�
    public IEnumerator GPS_On()
    {
        //����,GPS��� �㰡�� ���� ���ߴٸ�, ���� �㰡 �˾��� ���
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        //���� GPS ��ġ�� ���� ���� ������ ��ġ ������ ������ �� ���ٰ� ǥ��
        if (!Input.location.isEnabledByUser)
        {
            yield break;
        }

        //��ġ �����͸� ��û -> ���� ���
        Input.location.Start();

        //GPS ���� ���°� �ʱ� ���¿��� ���� �ð� ���� �����
        while (Input.location.status == LocationServiceStatus.Initializing && waitTime < maxWaitTime)
        {
            yield return new WaitForSeconds(1.0f);
            waitTime++;
        }

        //���� ���� �� ������ ���еƴٴ� ���� ���
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            yield break;
        }

        //���� ��� �ð��� �Ѿ���� ������ �����ٸ� �ð� �ʰ������� ���
        if (waitTime >= maxWaitTime)
        {
            yield break;
        }

        //���ŵ� GPS �����͸� ȭ�鿡 ���/

        LocationInfo li = Input.location.lastData;
        //��ġ ���� ���� ���� üũ
        receiveGPS = true;

        //��ġ ������ ���� ���� ���� resendTime ������� ��ġ ������ �����ϰ� ���
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
                if (!isGo && ((UCS_Go.z < UCS.z || UCS_Go.x < UCS.x)||(-UCS_Go.z>UCS.z||-UCS_Go.x>UCS.x))) //  �������� ��ǥ���� ���ٸ� ������ ����
                {
                    if (mapmanager.MapCloseUp)
                        mapmanager.OnClickMapButton();
                    else
                    isGo = true;
                        bgm.SetBgmBattle();
                        GunObject.SetActive(true);
                        GameManager.CountSlime.gameObject.SetActive(true);
                        GameManager.CountSlime.text = "���� ������ �� : " + GameManager.CountSlime_int.ToString();
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
