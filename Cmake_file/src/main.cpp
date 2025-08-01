#include <opencv2/opencv.hpp>

int main() {
    // 读取图像
    cv::Mat image = cv::imread("example.jpg");

    // 检查图像是否加载成功
    if (image.empty()) {
        std::cerr << "Could not open or find the image!" << std::endl;
        return -1;
    }

    // 显示图像
    cv::imshow("Display Image", image);

    // 等待用户按键
    cv::waitKey(0);

    return 0;
}