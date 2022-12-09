#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

int main() {

    string path = "/Users/shrikrishnabhat/Desktop/Programming/EQQ.jpg";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);
    return 0;
}
