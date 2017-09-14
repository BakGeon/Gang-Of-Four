using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartpageScript : MonoBehaviour {

    // 씬 이동시 Build Setting에 이동되는 씬이 들어가있는지 확인하자
    public void ChangeGameScene()
    {
        SceneManager.LoadScene("GamePage");
    }
      
    public void GameExit()
    {
        Application.Quit();
    }
}
