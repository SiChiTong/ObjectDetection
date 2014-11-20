#include "ObjectDetector.h"

using namespace cv;
using namespace std;

int main( int argc, char** argv)
{
    if(argc != 2)
    {   cout<<"\n Need more arguments"<<endl;
        return -1;}
    findKeypoints(argv[1]);
    return 0;

}



