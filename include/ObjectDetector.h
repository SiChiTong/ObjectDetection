#ifndef OBJECTDETECTOR_H
#define OBJECTDETECTOR_H

#include<iostream>
#include<stdio.h>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/imgproc/imgproc.hpp"

void testHomography(int min_hessian=400);
void findKeypoints(const char* image,int min_hessian=400);


#endif // OBJECTDETECTOR_H
