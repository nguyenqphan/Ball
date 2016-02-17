using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

	public delegate void ActionScaling(GameObject gameObject);
	public static event ActionScaling Scalling;
	
	private float movingSpeed = 20f;
	private float scale = 0.5f;
	private float startScale;
	private bool isBigger = true;
	private float scaleSpeed = 1f;


	void OnTriggerEnter(Collider other){

		if(other.gameObject.CompareTag("Player"))
		{
			if(Scalling != null)
			{
				Scalling(gameObject);
				if(gameObject.CompareTag("OneHalf"))
				{
					//Debug.Log(gameObject.tag);
					gameObject.tag = "DoubleSize";
				}
				if(gameObject.CompareTag("DoubleSize"))
				{
//					Debug.Log(gameObject.tag);
					gameObject.tag = "OneHalf";
				}
				gameObject.SetActive(false);
			}
		}
	}


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
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
