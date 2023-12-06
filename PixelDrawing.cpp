#include "opencv2/opencv.hpp"
#include <iostream>


void draw(std::string shape) {
    std::string imagePath = "assets/" + shape + ".png";
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_UNCHANGED);
    for (int row = 0; row < image.rows; ++row) {
        for (int col = 0; col < image.cols; ++col) {
            cv::Vec4b pixel = image.at<cv::Vec4b>(row, col);
            if (pixel[3] == 0) {
                std::cout << ' ';
            }
            else {
                int alpha = pixel[3];
                int red = (pixel[2] * alpha) / 255;
                int green = (pixel[1] * alpha) / 255;
                int blue = (pixel[0] * alpha) / 255;

                std::cout << "\033[48;2;" << red << ";" << green << ";" << blue << "m  "; //Print using the RGBA values
                std::cout << "\033[0m"; //Reset the color
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    draw("test");
    getchar();
    return 0;
}