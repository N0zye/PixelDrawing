#include <opencv2/opencv.hpp>
#include <iostream>

class Squid {
public:
    void disegna(std::string shape) {
        std::string imagePath = "assets/" + shape + ".png";
        cv::Mat image = cv::imread(imagePath, cv::IMREAD_GRAYSCALE);
        for (int row = 0; row < image.rows; ++row) {
            for (int col = 0; col < image.cols; ++col) {
                if (image.at<uchar>(row, col) < 255) {
                    std::cout << '*';
                }
                else {
                    std::cout << ' ';
                }
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    Squid game;

    game.disegna("cerchio");
    

    return 0;
}