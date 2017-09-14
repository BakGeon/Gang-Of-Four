using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour {

    GameObject Player;
    int moveSpeed = 5;
    
	void Start () {
        Player = GetComponent<GameObject>();
	}
	
	void Update () {
        double posX = transform.position.x;
        double posY = transform.position.y;        

        if (Input.GetKey(KeyCode.LeftArrow) == true)
        {
            transform.Translate(Vector3.left * moveSpeed * Time.deltaTime);
        }
        
        if (Input.GetKey(KeyCode.RightArrow) == true)
        {
            transform.Translate(Vector3.right * moveSpeed * Time.deltaTime);
        }

        if (Input.GetKey(KeyCode.UpArrow) == true)
        {
            transform.Translate(Vector3.up * moveSpeed * Time.deltaTime);
        }

        if (Input.GetKey(KeyCode.DownArrow) == true)
        {
            transform.Translate(Vector3.down * moveSpeed * Time.deltaTime);
        }

        if(Input.GetKey(KeyCode.LeftControl) == true)
        {
            
        }

        if(Input.GetKey(KeyCode.Space) == true)
        {

        }
    }
}
