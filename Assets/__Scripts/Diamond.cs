using UnityEngine;
using System.Collections;

public class Diamond : MonoBehaviour {

	public delegate void ActionBreaking(GameObject gameObject);
	public static event ActionBreaking BreakingDiamond;

	private bool isSpinning = true;
	private bool isFloating = true;
	private float movingSpeed = 20f;

	private float floatSpeed = 1f; // In cycles (up and down) per second

	private float movementDistance = 2f; // The maximum distance the coin can move up and down
	
	private float startingY;
	private bool isMovingUp = true;
	private DiamondDeactivate diaDeactivate;

	void Awake()
	{
		diaDeactivate = GetComponent<DiamondDeactivate>();
	}
	
	// Use this for initialization
	void Start () {
		if(gameObject.CompareTag("StartDiamond"))
		{
			StartCoroutine(Spin());
			StartCoroutine(Float());
		}

	}


	void OnTriggerEnter(Collider collider)
	{
		if (collider.gameObject.CompareTag("Player"))
		{

			Pickup();
			if(BreakingDiamond != null)
			{
				BreakingDiamond(gameObject);
			}

		}
		else if(collider.gameObject.CompareTag("ComboCube")){
			if(BreakingDiamond != null)
			{
				gameObject.SetActive(false);
				BreakingDiamond(gameObject);
			}
		}else{
			if(collider.gameObject.CompareTag("LeftWall") || collider.gameObject.CompareTag("RightWall")) 			//Remove this code and tag when done with testing
				diaDeactivate.resetTime = 0f;
		}
	}
	
	private void Pickup()
	{
		diaDeactivate.resetTime = 0f;
		GameStateManager.HighScore++;
		gameObject.SetActive(false);
	}
	
	private IEnumerator Spin()
	{
		while(isSpinning)
		{
			transform.Rotate (transform.forward, 360 * .5f * Time.deltaTime, Space.World);
			yield return 0;
		}
	}

	private IEnumerator Float()
	{
		startingY = transform.position.y;
		while (isFloating) {
			float newY = transform.position.y + (isMovingUp ? 1 : -1)  * movementDistance * floatSpeed * Time.deltaTime;
			
			if (newY > startingY + movementDistance) {
				newY = startingY + movementDistance;
				isMovingUp = false;
			} else if (newY < startingY) {
				newY = startingY;
				isMovingUp = true;
			}
			
			transform.position = new Vector3 (transform.position.x, newY, transform.position.z);

			yield return 0;
		}
	}

	public void MoveDiamond(Vector3 targetPos)
	{
		StartCoroutine(moving(targetPos));
	}

	private IEnumerator moving(Vector3 targetPos)
	{
		MeshCollider meshCollider = gameObject.GetComponent<MeshCollider>();
		meshCollider.enabled = false;

		while(transform.position != targetPos)
		{
			transform.position = Vector3.MoveTowards(transform.position, targetPos, movingSpeed * Time.deltaTime);
			yield return 0;
		}

		meshCollider.enabled = true;
		StartCoroutine(Spin());
		StartCoroutine(Float());
	}



	
}
