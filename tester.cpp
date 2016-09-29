#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/videoio.hpp>

using namespace cv;

int main(){

	Mat image = imread("naruto.jpg",0);

	namedWindow("myimage", WINDOW_AUTOSIZE );

	imshow("myimage", image);

	waitKey(5000);

	return 0;
}
