using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnigmaBersagliManager : MonoBehaviour
{
    public UnityEvent OnTuttiBersagliColpiti;
    public bool checkEnigmaCompletato;
    public int totaleBersagliDaColpire;
    public int bersagliAttualmenteColpiti;

//Function called to ingrease a counter (if needed) to complete the first phase
    public void AumentaContatoreBersagli()
    {
        //Increase the counter
        bersagliAttualmenteColpiti++;
        Debug.Log ("CounterFirstPhase incrementato a: " + totaleBersagliDaColpire.ToString());
        //Check if the current count is major or equal to the target count and if the first phase is not completed
        if (bersagliAttualmenteColpiti >= totaleBersagliDaColpire && !checkEnigmaCompletato)
        {
            //Call the Function
            BersagliCompletati();
        }
    }

    //Function called when the counter conditions are met
    public void BersagliCompletati()
    {
        //External Unity Event call
        OnTuttiBersagliColpiti.Invoke();
        //Set the first phase counter as completed
        checkEnigmaCompletato = true;
    }
}
