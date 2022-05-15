using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnigmaLibriManager : MonoBehaviour
{
    public UnityEvent OnRipiano1;
    public UnityEvent OnRipiano2;
    public UnityEvent OnRipiano3;
    public UnityEvent OnRipiano4;
    public UnityEvent OnRipiano5;
    public UnityEvent OnRunaCorrect;
    public UnityEvent EnigmaLibriCompletato;

    public bool ripiano1Corretto;
    public bool ripiano2Corretto;
    public bool ripiano3Corretto;
    public bool ripiano4Corretto;
    public bool ripiano5Corretto;

    public void OnLibroPosizionato()
    {
//da capire la logica con cui viene controllata la posizione corretta dei libri
    }

    public void OnRipiano1Correct()
    {
        OnRipiano1.Invoke();
        ripiano1Corretto = true;
        ControlloProgressoEnigmaQuadri();
    }

    private void OnRipiano1Incorrect()
    {
        ripiano1Corretto = false;
    }

    public void OnRipiano2Correct()
    {
        OnRipiano2.Invoke();
        ripiano2Corretto = true;
        ControlloProgressoEnigmaQuadri();
    }

    private void OnRipiano2Incorrect()
    {
        ripiano2Corretto = false;
    }

    public void OnRipiano3Correct()
    {
        OnRipiano3.Invoke();
        ripiano3Corretto = true;
        ControlloProgressoEnigmaQuadri();
    }

    private void OnRipiano3Incorrect()
    {
        ripiano3Corretto = false;
    }

    public void OnRipiano4Correct()
    {
        OnRipiano4.Invoke();
        ripiano3Corretto = true;
        ControlloProgressoEnigmaQuadri();
    }

    private void OnRipiano4Incorrect()
    {
        ripiano4Corretto = false;
    }

    public void OnRipiano5Correct()
    {
        OnRipiano5.Invoke();
        ripiano3Corretto = true;
        ControlloProgressoEnigmaQuadri();
    }

    private void OnRipiano5Incorrect()
    {
        ripiano4Corretto = false;
    }

    public void ControlloProgressoEnigmaQuadri()
    {
        if (ripiano1Corretto && ripiano2Corretto && ripiano3Corretto && ripiano4Corretto && ripiano5Corretto)
        EnigmaLibriCompletato.Invoke();

    }
    public void OnRunaPlaced()
    {
        OnRunaCorrect.Invoke();
    }
}
