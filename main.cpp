#include<iostream>
#include<stdio.h>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/nonfree/nonfree.hpp"

using namespace cv;
using namespace std;

int main( int argc, char** argv)
{
    if(argc != 2)
    {   cout<<"\n Need more arguments"<<endl;
        return -1;}
    Mat img = imread( argv[1], CV_LOAD_IMAGE_COLOR);
    Mat output;
    if(!img.data)
     {
        cout<<"\n Error Reading image";

    }
    int minHessian = 400;

    SurfFeatureDetector detector(minHessian);
    vector<KeyPoint> keypoint_img;
    detector.detect(img,keypoint_img);
    drawKeypoints(img, keypoint_img, output);
//    for(std::vector<KeyPoint>::iterator it=keypoint_img.begin(); it !=keypoint_img.end();it++){
//        KeyPoint point=*it;
//        cout<<point.pt;
//    }
    imshow("Keypoints in the image", output);
    imshow("Input image", img);
    waitKey();
    destroyAllWindows();
    return 0;

}
