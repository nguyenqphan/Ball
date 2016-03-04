using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

	public delegate void ActionScaling(GameObject gameObject);
	public static event ActionScaling Scalling;
	public delegate void ActionExplode(GameObject gameObject);
	public static event ActionExplode ExplodeBall;

	private SoundBreaking ballExplodeClip;


	private float movingSpeed = 20f;
	private float scale = 0.5f;
	private float startScale;
	private bool isBigger = true;
	private float scaleSpeed = 1f;

	private BallDeactivator ballDeactivator;

	void Awake()
	{
		ballExplodeClip = GameObject.Find("GameManager").GetComponent<SoundBreaking>();
		ballDeactivator = GetComponent<BallDeactivator>();
	}


	void OnTriggerEnter(Collider other){

		if(other.gameObject.CompareTag("Player"))
		{
			ballDeactivator.timeToLive = 0f;
			ballExplodeClip.PlayExplodeBall();
			gameObject.SetActive(false);
			if(ExplodeBall!= null)
			{
				ExplodeBall(gameObject);
			}
				
			if(Scalling != null)
			{
				if(gameObject.CompareTag("OneHalf"))
				{
					gameObject.tag = "DoubleSize";
				}else if(gameObject.CompareTag("DoubleSize"))
				{
					gameObject.tag = "OneHalf";
				}
			
				Scalling(gameObject);

			}
		}else if(other.gameObject.CompareTag("ComboCube")){
			if(ExplodeBall != null)
			{
				gameObject.SetActive(false);
				ExplodeBall(gameObject);
			}
		}
	}

	public void MoveBall(Vector3 targetPos)
	{
		StartCoroutine(moving(targetPos));
	}

	private IEnumerator moving(Vector3 targetPos)
	{
		SphereCollider sphereCollider = gameObject.GetComponent<SphereCollider>();
		sphereCollider.enabled = false;

		while(transform.position != targetPos)
		{
			transform.position = Vector3.MoveTowards(transform.position, targetPos, movingSpeed * Time.deltaTime);
			yield return 0;
		}

		sphereCollider.enabled = true;
		StartCoroutine(pulse());

	}

	private IEnumerator pulse()
	{
//		Debug.Log("Start pulsing");
		startScale = transform.localScale.x;
		while(true)
		{
			float newScale = transform.localScale.x + (isBigger ? 1 : -1) * scaleSpeed * Time.deltaTime;

			if(newScale > startScale + scale)
			{
				newScale = startScale + scale;
				isBigger = false;
			}else if(newScale < startScale)
			{
				newScale = startScale;
				isBigger = true;
			}
				
			transform.localScale = new Vector3(newScale, newScale, newScale);
			//Debug.Log(transform.localScale);
			yield return 0;
		}

	
	}
}
