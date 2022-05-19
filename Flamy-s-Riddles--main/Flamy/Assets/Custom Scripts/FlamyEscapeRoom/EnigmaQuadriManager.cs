using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnigmaQuadriManager : MonoBehaviour
{
   
    public UnityEvent OnQuadro1;
    public UnityEvent OnQuadro2;
    public UnityEvent EnigmaQuadriCompletato;

    public bool quadro1Posizionato;
    public bool quadro2Posizionato;

    public void OnQuadro1Correct()
    {
        OnQuadro1.Invoke();
        quadro1Posizionato = true;
        ControlloProgressoEnigmaQuadri();
    }

    public void OnQuadro2Correct()
    {
        OnQuadro2.Invoke();
        quadro2Posizionato = true;
        ControlloProgressoEnigmaQuadri();
    }

    public void ControlloProgressoEnigmaQuadri()
    {
        if (quadro1Posizionato && quadro2Posizionato)
        EnigmaQuadriCompletato.Invoke();

    }


}
