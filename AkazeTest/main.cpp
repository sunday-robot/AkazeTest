#pragma warning(push)
#pragma warning(disable:4819)
#include <opencv2/opencv.hpp>
#pragma warning(pop)

int main(int argc, const char* argv[])
{
	cv::Mat mat(cv::Size(1920, 1080), CV_8UC3);
	auto mat2 = cv::imread("sample.jpg");
	return 0;
}
