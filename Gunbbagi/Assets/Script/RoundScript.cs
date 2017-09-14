using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class RoundScript : MonoBehaviour {

    public int round_cnt = 0;
    Text t;

    // Use this for initialization
    void Start () {
        t = GetComponent<Text>();
        StartCoroutine("NextRoundcnt");
	}
	
    IEnumerator NextRoundcnt()
    {
        round_cnt++;
        t.text = "Round " + round_cnt;
        yield return null;
    }

	// Update is called once per frame
	void Update () {
		
	}
}
