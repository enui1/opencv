#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;
int main(int argc, char** argv )
{
    Mat image;
    image = imread( argv[1], 1 );
    namedWindow("Display", WINDOW_AUTOSIZE );
    imshow("Display", image);
    waitKey(0);
    return 0;
}
