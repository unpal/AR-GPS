using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallowPlayer : MonoBehaviour
{
    public GameObject Player;

    public float offsetX;
    public float offsetY;
    public float offsetZ;
    private void Awake()
    {
    }
    void Update()
    {
        Vector3 FixedPos =
               new Vector3(
                   Player.transform.position.x + offsetX,
                   Player.transform.position.y + offsetY,
                   Player.transform.position.z + offsetZ
                   );
        transform.position = FixedPos;
    }
}
