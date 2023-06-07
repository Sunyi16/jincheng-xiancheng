/*打开摄像头显示处理视频*/

#include<opencv2/opencv.hpp>

using namespace	cv;
using namespace std;

int main()
{
	VideoCapture capture(0);
	while(1)
	{
		Mat frame;
		capture>>frame;
		imshow("读取视频帧",frame);
		waitKey(30);
	}
	system("pause");
	return 0;
}
