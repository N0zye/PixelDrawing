#include <opencv2/opencv.hpp>
#include <iostream>

class Squid {
private:
    void printColor(int blue, int green, int red, int alpha) {
        // Calcola i nuovi valori di RGB basati sul canale alpha
        red = (red * alpha) / 255;
        green = (green * alpha) / 255;
        blue = (blue * alpha) / 255;

        // Stampa il colore con il nuovo valore di alpha
        std::cout << "\033[48;2;" << red << ";" << green << ";" << blue << "m  ";

        // Ripristina la console al colore predefinito dopo la stampa
        std::cout << "\033[0m";
    }

public:
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
                    printColor(pixel[0], pixel[1], pixel[2], pixel[3]);
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
