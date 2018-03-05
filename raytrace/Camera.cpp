#include "Camera.h"


PerspectiveCamera::PerspectiveCamera(XMFLOAT4X4 camToworld, float fov, float screenwindow[4]);
{
	Camera_To_World = camToworld;
	Camera_To_Screen = XMFLOAT4X4();

	XMStoreFloat4x4(&ScreenToRaster,
		XMMatrixMultiply(
			XMMatrixScaling()
			)
		)
	ScreenToRaster = 
}

