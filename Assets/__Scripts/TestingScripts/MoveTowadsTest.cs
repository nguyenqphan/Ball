using UnityEngine;
using System.Collections;

public class MoveTowadsTest : MonoBehaviour {

	private Vector3 currentPos;
	//private Rigidbody rig;
	//private Vector3 targetPos = new Vector3 (0f, 1f, 0f); 
	private float speed = 50;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {


	
		if(Input.GetButtonDown("Fire1"))
		{
			Debug.Log("Button is down");

			moveCube();
		}
	}

	public void moveCube()
	{
		currentPos = transform.position;
		StartCoroutine(Move(currentPos, new Vector3 (0f, 1f, 0f)));
	}


	public IEnumerator Move(Vector3 currentPos, Vector3 targetPos){
		
		while (transform.position != targetPos) {
			transform.position = Vector3.MoveTowards (transform.position, targetPos, speed * Time.deltaTime);
			
			yield return 0;

			Debug.Log("Im still moving");
		}
	}
}
