#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main() {
    cv::Mat image = cv::imread("example.jpg");

    if (image.empty()) {
        cerr << "图片不存在！" << endl;
        return -1;
    }

    cout << "图片加载成功！OpenCV 正常工作！" << endl;

    // 关键：不显示，而是保存成新图片
    cv::imwrite("output.jpg", image);

    return 0;
}