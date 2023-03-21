using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMManager : MonoBehaviour
{
    [SerializeField] AudioClip Bgm2;
    [SerializeField] AudioSource audiosource;
    void Start()
    {
        audiosource.loop = true;
        audiosource.Play();
    }

    public void SetBgmBattle()
    {
        audiosource.Stop();
        audiosource.clip = Bgm2;
        audiosource.Play();

    }
}
