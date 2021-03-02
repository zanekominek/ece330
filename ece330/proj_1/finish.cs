using UnityEngine.UI;
using System.Collections;
 
public class PickupCounter : MonoBehaviour {
 
    public Text countText;
    private int count;
 
    // Use this for initialization
    void Start ()
    {
        count = 0;
        SetCountText ();
    }
 
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag ("Enemy")) {
            other.gameObject.SetActive (false);
            count = count + 1;
            SetCountText ();
        }
    }
   
    void SetCountText ()
    {
        countText.text = "Count: " + count.ToString();
    }
}