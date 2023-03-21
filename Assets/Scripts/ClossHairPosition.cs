using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ClossHairPosition : MonoBehaviour
{
    [SerializeField] Image CrossHair;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount == 0)
            return;
        Touch touch = Input.GetTouch(0);
        if(touch.phase == TouchPhase.Began)
        CrossHair.rectTransform.anchoredPosition = Input.GetTouch(0).position;
    }
}
