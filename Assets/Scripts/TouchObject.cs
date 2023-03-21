using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TouchObject : MonoBehaviour
{
    public int Hp;
    [SerializeField] private Animator anim;
    [SerializeField] private Slider HpSlider;
    [SerializeField] private GPS gps;
    [SerializeField] private AudioSource audiosoure;
    [SerializeField] private AudioClip DieSound;
    [SerializeField] private GameManagmont gamemanager;
    private bool isDie;
    void Awake()
    {
        Hp = 150;
        isDie = false;
        gps = GameObject.Find("GPSManager").GetComponent<GPS>();
        gamemanager = GameObject.Find("GameManager").GetComponent<GameManagmont>();
    }

    void Update()
    {
        if(Hp <= 0&& !isDie)
        {
            gamemanager.SlimeCount();
            isDie = true;
            gps.CountSlime--;
            anim.SetTrigger("Die");
            Destroy(gameObject,3);
            Destroy(transform.GetChild(1).GetComponent<BoxCollider>());
            audiosoure.clip = DieSound;
            audiosoure.Play();

        }
        transform.LookAt(Camera.main.transform);
        HpSlider.value = Hp;
    }
    public void SlimeTouch()
    {
        Hp -= 15;
        if(Hp > 0)
        audiosoure.Play();
    }
}
