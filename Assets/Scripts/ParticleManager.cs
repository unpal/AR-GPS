using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleManager : MonoBehaviour
{
    public ParticleSystem particleObject; //��ƼŬ�ý���

    void Awake()
    {
        particleObject = GetComponent<ParticleSystem>();
        particleObject.Play();
        Destroy(gameObject, 3);
    }


}
