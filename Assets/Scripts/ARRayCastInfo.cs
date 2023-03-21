using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARCore;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
public class ARRayCastInfo : MonoBehaviour
{
    [SerializeField] private ARRaycastManager aRRaycastManager;
    [SerializeField] private Camera ArCamera;
    [SerializeField] private TouchObject SlimeTouch;
    [SerializeField] private GPS gps;
    [SerializeField] private TouchObject TouchSlime;
    [SerializeField] private GameObject Effect;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();
    [SerializeField] private GameManagmont GameManager;

    void Update()
    {
            if (Input.touchCount == 0||GameManager.isSetting||GameManager.isExplain)
                return;
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = ArCamera.ScreenPointToRay(touch.position);
                RaycastHit objhit;
                if (Physics.Raycast(ray, out objhit))
                {
                    if (objhit.collider.transform.tag == "Slime")
                    {
                        objhit.transform.parent.GetComponent<TouchObject>().SlimeTouch();
                    Instantiate(Effect, objhit.transform.position, objhit.transform.rotation);
                    }
                    if(objhit.collider == null)
                {

                }
                }
            }
        }
    }
