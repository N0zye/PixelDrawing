# Pixel Drawing in Console

This repository contains a C++ program that utilizes the OpenCV library to draw an image based on an input image provided. The `draw` function is designed to read an image file from the "assets" folder and render the corresponding content in the console.

## Requirements
- C++ compiler
- OpenCV library

## How to Use

1. Clone the repository:
```bash
git clone https://github.com/N0zye/SquidGame.git
cd SquidGame
```
2. Compile
Compile it howhever you want.


## Custom Shapes

This demo comes with only one image but you can add as many as you wish, in the `assets` folder. Keep in mind that the name of the .png file determines argument of the `draw` function.
To draw a custom shape, modify the `draw("test");` line in `main` by replacing "test" with the desired image filename (without the extension). Ensure that the corresponding png file exists in the "assets" folder.

Feel free to experiment with different images!

## Example

The provided source code demonstrates how to draw an image. 

```cpp
int main()
{
    // A "test.png" needs to exist in the assets folder
    game.disegna("test");

    return 0;
}
```

## License

This project is licensed under the [MIT License](LICENSE.txt). Feel free to use and modify the code as needed.
