#include <iostream>

#include <opencv2/core/core.hpp>        // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv2/imgproc/imgproc.hpp>  // Gaussian Blur
#include <opencv2/highgui/highgui.hpp>  // OpenCV window I/O

using namespace cv;

int main(int argc, char* argv[])
{
    VideoCapture cap(-1);

    int i = 1000000;

    while( cap.isOpened() )
    {
        Mat frame;
        cap.read(frame);

        imwrite("./frames/frame" + std::to_string(i) + ".jpg", frame);

        //imshow("Float",frame);

        waitKey(1000);
        i++;
    }
    return 0;
}
