/*

*/

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
	const char* path = "C:\\Users\\LG\\Desktop\\comics.jpg";
	cv::Mat img = cv::imread(path);
	cv::imshow("test", img);
	cv::waitKey(0);
}