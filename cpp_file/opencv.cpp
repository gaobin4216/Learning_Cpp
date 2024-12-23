#include <opencv2/opencv.hpp>
#include<iostream>
int main()
{
    std::cout<<"hello_vscode"<<std::endl;
    // 读取图片
    cv::Mat image = cv::imread("D:\\Learning_repository\\Learning_Cpp\\cpp_file\\R.png",1);  // 替换成你的图片路
    // 检查图片是否成功读取
    if (image.empty()) {
        std::cerr << "Could not open or find the image!" << std::endl;
        return -1;
    }
    // 显示图片
    cv::imshow("Displayed Image", image);
    // 等待按键，0表示等待任意键
    cv::waitKey(0); 
    // 关闭窗口
    cv::destroyAllWindows();
    return 0;
}
