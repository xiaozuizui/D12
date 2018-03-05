#pragma once
#ifndef LITTLEMM_CAMERA
#define LITTLEMM_CAMERA

#include<DirectXMath.h>
#include<DirectXPackedVector.h>

using namespace DirectX;


class ProjectiveCamera {
public:
	ProjectiveCamera(XMFLOAT4X4 camToworld);
	virtual float GenerateRay();
	XMFLOAT4X4 Camera_To_World;
	
protected:
	XMFLOAT4X4 Camera_To_Screen, RasterToCamera, ScreenToRaster, RasterToScreen;

	float lensRadius, focalDistance;
};

class PerspectiveCamera :ProjectiveCamera
{
public:
	PerspectiveCamera(XMFLOAT4X4 camToworld, float fov, float screenwindow[4]);
	
private:
	float fov;

};

#endif // !LITTLEMM_CAMERA
