#include "knuCamera.h"

KCvCamera::KCvCamera() {
}

KCvCamera::~KCvCamera() {
}

void KCvCamera::close() {
}

bool KCvCamera::init(int camNum, bool bThreadMode) {
	return false;
}

bool KCvCamera::getMarkerPose(int markId, glm::mat4 &camPose, cv::Mat &img, int cols) {
	return false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

KGlCamera::KGlCamera() {
}

KGlCamera::~KGlCamera() {
}

