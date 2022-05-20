using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnigmaCiocchiManager : MonoBehaviour
{

public UnityEvent OnTuttiCiocchiDati;
    public bool checkEnigmaCiocchiCompleto;
    public int numeroCiocchiDaDare;
    public int numeroCiocchiCorrente;

//Function called to ingrease a counter (if needed) to complete the first phase
    public void AumentaNumeroCiocchi()
    {
        //Increase the counter
        numeroCiocchiCorrente++;
        Debug.Log ("CounterFirstPhase incrementato a: " + numeroCiocchiDaDare.ToString());
        //Check if the current count is major or equal to the target count and if the first phase is not completed
        if (numeroCiocchiCorrente >= numeroCiocchiDaDare && !checkEnigmaCiocchiCompleto)
        {
            //Call the Function
            FirstPhaseCounterComplete();
        }
    }

    //Function called when the counter conditions are met
    public void FirstPhaseCounterComplete()
    {
        //External Unity Event call
        OnTuttiCiocchiDati.Invoke();
        //Set the first phase counter as completed
        checkEnigmaCiocchiCompleto = true;
    }
}
