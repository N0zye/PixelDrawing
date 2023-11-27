# Squid Drawing Game

This repository contains a C++ program that utilizes the OpenCV library to draw a shape based on an input shape provided. The `Squid` class is designed to read an image file from the "assets" folder and render the corresponding shape in the console.

## Requirements
- C++ compiler
- OpenCV library

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/squid-drawing-game.git
   cd squid-drawing-game
   ```



## Custom Shapes

This demo comes with only one image but you can add as many as you wish, in the `assets` folder. Keep in mind that the name of the .png file determines argument of the `disegna` metohd.
To draw a custom shape, modify the `game.disegna("cerchio");` line in the `main` function by replacing "cerchio" with the desired shape filename (without the extension). Ensure that the corresponding image file is available in the "assets" folder.

Feel free to experiment with different shapes!

## Example

The provided source code demonstrates how to draw a squid shape by default. 

```cpp
int main()
{
    Squid game;

    // Draw a custom shape (e.g., "triangolo")
    // A "triangolo.png" needs to exist in the assets folder
    game.disegna("triangolo");

    return 0;
}
```

## License

This project is licensed under the [MIT License](LICENSE.txt). Feel free to use and modify the code as needed.
