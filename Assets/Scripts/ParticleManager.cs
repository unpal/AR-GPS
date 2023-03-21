using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleManager : MonoBehaviour
{
    public ParticleSystem particleObject; //파티클시스템

    void Awake()
    {
        particleObject = GetComponent<ParticleSystem>();
        particleObject.Play();
        Destroy(gameObject, 3);
    }


}
