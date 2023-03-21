using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NaviManager : MonoBehaviour
{
    public GameObject[] SpawnPoint;
    bool FindSlime = false;
    public float[] shortDir;
    public float temp;
    bool SetShort = false;
    GameObject tempGameobject;
    [SerializeField] GameManagmont gamemanager;
    void Update()
    {
        if (gameObject.activeSelf)
        {
            if (!FindSlime)
            {
                FindSlime = true;
            for(int i =0; i < 4; i++)
            {
                SpawnPoint[i] = GameObject.Find("AR Session Origin").transform.GetChild(i + 1).GetChild(0).gameObject;
            }
            }
            if (!SetShort)
            {
        for (int i = 0; i < SpawnPoint.Length; i++) 
        {
            shortDir[i] = Vector3.Distance(SpawnPoint[i].transform.position,gameObject.transform.position);
        }
            for (int i = 0; i < SpawnPoint.Length; i++)
            {
                for (int j = 0; j < SpawnPoint.Length-1-i; j++)
                {
                    if (shortDir[j] > shortDir[j + 1])
                    {
                        temp = shortDir[j];
                    tempGameobject = SpawnPoint[j];
                    shortDir[j] = shortDir[j + 1];
                            SpawnPoint[j] = SpawnPoint[j+1];
                    shortDir[j + 1] = temp;
                            SpawnPoint[j + 1] = tempGameobject;
                }
                }
                    SetShort = true;
            }
            }
            else
            {

        if (SpawnPoint[0] != null)
            transform.LookAt(SpawnPoint[0].transform.position);
        else if (SpawnPoint[1] != null)
            transform.LookAt(SpawnPoint[1].transform.position);
        else if (SpawnPoint[2] != null)
            transform.LookAt(SpawnPoint[2].transform.position);
        else if (SpawnPoint[3] != null)
            transform.LookAt(SpawnPoint[3].transform.position);
        else
            Destroy(gameObject);
            }
            }
    }
    }
