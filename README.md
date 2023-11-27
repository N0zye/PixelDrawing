# Squid Drawing Game

This repository contains a C++ program that utilizes the OpenCV library to draw a squid shape based on an input shape provided. The `Squid` class is designed to read an image file from the "assets" folder and render the corresponding shape in the console.

## Requirements
- C++ compiler
- OpenCV library

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/squid-drawing-game.git
   cd squid-drawing-game
   ```

2. Compile the program:
   ```bash
   g++ -o squid_game squid_game.cpp `pkg-config opencv --cflags --libs`
   ```

3. Run the executable:
   ```bash
   ./squid_game
   ```

## Custom Shapes

To draw a custom shape, modify the `game.disegna("cerchio");` line in the `main` function by replacing "cerchio" with the desired shape filename (without the extension). Ensure that the corresponding image file is available in the "assets" folder.

Feel free to experiment with different shapes and share your creations!

## Example

The provided source code demonstrates how to draw a squid shape by default. You can customize the shape by changing the parameter in the `game.disegna()` function.

```cpp
int main()
{
    Squid game;

    // Draw a custom shape (e.g., "triangolo")
    game.disegna("triangolo");

    return 0;
}
```

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed.
