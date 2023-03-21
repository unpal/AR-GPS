using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageDestory : MonoBehaviour
{
    void Start()
    {
        
    }

    void Update()
    {
        transform.position += Vector3.up;
        Destroy(this, 1f);
    }
}
