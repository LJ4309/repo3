#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

#include <stdio.h> 

int main()
{
	Mat image = imread("E:/C++/222.jpg");
	imshow("1234", image);
	waitKey(0);
	return 0;



}


