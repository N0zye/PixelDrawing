#include <opencv2/opencv.hpp>
#include <iostream>

class Squid {
private:
    void printColor(int red, int green, int blue) {
        std::cout << "\033[38;2;" << red << ";" << green << ";" << blue << "m*"; //Color print
        std::cout << "\033[0m"; // Restore to default console after print
    }
public:
    void draw(std::string shape) {
        std::string imagePath = "assets/" + shape + ".png";
        cv::Mat image = cv::imread(imagePath, cv::IMREAD_GRAYSCALE);
        for (int row = 0; row < image.rows; ++row) {
            for (int col = 0; col < image.cols; ++col) {
                cv::Vec4b pixel = image.at<cv::Vec4b>(row, col);
                if (pixel[3] == 0) {
                    std::cout << ' ';                
                }
                else {
                    printColor(pixel[2], pixel[1], pixel[0]);
                }
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    Squid game;

    game.draw("cerchio");
    

    return 0;
}
