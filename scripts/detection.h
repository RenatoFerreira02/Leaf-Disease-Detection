#ifndef DETECTION_H
#define DETECTION_H
#include <iostream>

using namespace std;

#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/videoio.hpp>
#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgproc.hpp>

using namespace cv;
class diseaseDetection 
{

    private:



    public:

        diseaseDetection();
        ~diseaseDetection();

        Mat foundBrown(Mat frame);

};

#endif