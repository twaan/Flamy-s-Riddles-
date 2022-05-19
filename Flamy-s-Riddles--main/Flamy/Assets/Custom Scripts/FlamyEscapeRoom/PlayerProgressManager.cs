using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PlayerProgressManager : MonoBehaviour
{
    

    public UnityEvent OnIndizio1;
    public UnityEvent OnIndizio2;
    public UnityEvent OnIndizio3;
    public UnityEvent OnIndizio4;

    public void AttivaIndizio1 ()
    {
        OnIndizio1.Invoke();
    }

    public void AttivaIndizio2 ()
    {
        Debug.Log("Indizio 1 done");
        OnIndizio2.Invoke();
    }

    public void AttivaIndizio3 ()
    {
        Debug.Log("Indizio 2 done");
        OnIndizio3.Invoke();
    }

    public void AttivaIndizio4 ()
    {
        Debug.Log("Indizio 3 done");
        OnIndizio4.Invoke();
    }
}
