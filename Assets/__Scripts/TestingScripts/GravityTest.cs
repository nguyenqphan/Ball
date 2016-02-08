using UnityEngine;
using System.Collections;

public class GravityTest : MonoBehaviour {

   //private Rigidbody rig;

	// Use this for initialization
	void Start () {
	//	rig = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {

		//Physics.gravity = new Vector3(0, -50.0F, 0);
		//Debug.Log(Physics.gravity);
		//Debug.Log(rig.velocity);

		if(Input.GetButton("Fire2"))
		{
			ChangeGravity();
			//AddForceToPlayer();
		}

	}


	void ChangeGravity() {
//		Debug.Log("Fire2 is down");
		Physics.gravity = new Vector3(0, -3.0F, 0);

	}

	void AddForceToPlayer()
	{
		//Debug.Log("Force is added to player");
		//rig.AddForce(new Vector3(1, 0, 0) *100, ForceMode.Acceleration);
		//rig.AddRelativeForce(new Vector3(1, 0, 0) * 100, ForceMode.Acceleration);
	}

}
