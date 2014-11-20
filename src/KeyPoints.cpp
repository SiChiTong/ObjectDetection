#include "ObjectDetector.h"

using namespace cv;
using namespace std;


void findKeypoints(const char* image,int min_hessian){
    Mat img = imread( image, CV_LOAD_IMAGE_COLOR);
    Mat output;
    if(!img.data)
     {
        cout<<"\n Error Reading image";

    }
    int minHessian = min_hessian;

    SurfFeatureDetector detector(minHessian);
    vector<KeyPoint> keypoint_img;
    detector.detect(img,keypoint_img);
    drawKeypoints(img, keypoint_img, output);


    for(std::vector<KeyPoint>::iterator it=keypoint_img.begin(); it !=keypoint_img.end();it++){
        KeyPoint point=*it;
        cout<<point.pt;
    }

    namedWindow("Keypoints in the image",WINDOW_AUTOSIZE);
    namedWindow("Input image",WINDOW_AUTOSIZE);
    imshow("Keypoints in the image", output);
    imshow("Input image", img);
    waitKey();
    destroyWindow("Input image");
    destroyWindow("Keypoints in the image");

    return;
}

