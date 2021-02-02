namespace Mapbox.Examples
{
	using UnityEngine;
	using Mapbox.Utils;
	using Mapbox.Unity.Map;
	using Mapbox.Unity.MeshGeneration.Factories;
	using Mapbox.Unity.Utilities;
	using System.Collections.Generic;
	using Mapbox.Directions;
	using System.Linq;
	using System.Collections;

	public class SpawnOnMap : MonoBehaviour
	{
		[SerializeField]
		AbstractMap _map;

		[SerializeField]
		[Geocode]
		string[] _locationStrings;
		Vector2d[] _locations;

		[SerializeField]
		float _spawnScale = 100f;

		[SerializeField]
		List<GameObject> _markerPrefab;

		List<GameObject> _spawnedObjects;

		private Directions _directions;

		public LineRenderer lineRenderer;

		void Start()
		{
			_locations = new Vector2d[_locationStrings.Length];
			_spawnedObjects = new List<GameObject>();
			for (int i = 0; i < _locationStrings.Length; i++)
			{
				var locationString = _locationStrings[i];
				_locations[i] = Conversions.StringToLatLon(locationString);
				var instance = Instantiate(_markerPrefab[i]);
				instance.transform.localPosition = _map.GeoToWorldPosition(_locations[i], true);
				instance.transform.localScale = new Vector3(_spawnScale, _spawnScale, _spawnScale);
				_spawnedObjects.Add(instance);
			}

			//lineRenderer = GetComponent<LineRenderer>();
			//lineRenderer.positionCount = _spawnedObjects.Count;
			//for (int i = 0; i < _spawnedObjects.Count; i++)
			//{
			//	lineRenderer.SetPosition(i, _spawnedObjects[i].transform.position);
			//}
		}

		private void Update()
		{
			int count = _spawnedObjects.Count;
			for (int i = 0; i < count; i++)
			{
				var spawnedObject = _spawnedObjects[i];
				var location = _locations[i];
				spawnedObject.transform.localPosition = _map.GeoToWorldPosition(location, true);
				spawnedObject.transform.localScale = new Vector3(_spawnScale, _spawnScale, _spawnScale);
			}
		}

		//void Query()
		//{
		//	var count = _spawnedObjects.Count;
		//	var wp = new Vector2d[count];
		//	for (int i = 0; i < count; i++)
		//	{
		//		wp[i] = _spawnedObjects[i].GetGeoPosition(_map.CenterMercator, _map.WorldRelativeScale);
		//	}
		//	var _directionResource = new DirectionResource(wp, RoutingProfile.Driving);
		//	_directionResource.Steps = true;
		//	_directions.Query(_directionResource, HandleDirectionsResponse);
		//}
	}
}