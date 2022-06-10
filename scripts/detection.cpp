#include "detection.h"


diseaseDetection::diseaseDetection() {

}

diseaseDetection::~diseaseDetection(){
 

}

Mat diseaseDetection::foundBrown(Mat frame) {
    Mat hsv, mask, res;
    //cvtColor(frame, hsv, COLOR_RGB2HSV);
    inRange(frame, Scalar(0,0,0), Scalar(87, 255, 255), mask);

    bitwise_and(frame, frame, res, mask);

    return (res);
    

}

int main (){
diseaseDetection* detect = new diseaseDetection();
string path = "Images/leaf-spot-disease.jpg";
Mat frame = imread(path);
Mat image;
image = detect->foundBrown(frame);
imshow("image", image);
}







