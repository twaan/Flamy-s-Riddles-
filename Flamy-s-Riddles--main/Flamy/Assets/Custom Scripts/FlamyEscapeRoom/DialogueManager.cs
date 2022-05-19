using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DialogueManager : MonoBehaviour
{

    public AudioSource flamyAudioSource;
    public AudioClip flamyDialogues;


    public void CallFlamyDialouge( AudioClip flamyDialogues)
    {
        flamyAudioSource.Play();
    }

    

}
