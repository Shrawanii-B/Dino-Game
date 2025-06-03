# 🦖 Console Dino Game in C++

A fun little Dino Jump Game made using C++ that runs directly in your terminal!  
Inspired by the Google Chrome offline T-Rex runner, this project brings a similar experience to the Windows command line.

## 🎮 Game Features

- ASCII-based graphics (Dino = `D`, Tree = `T`, Ground = `_`)
- Dino can **jump** to avoid incoming trees
- **Score counter** increases as you pass obstacles
- **Dynamic difficulty** increases as your score rises
- Random tree generation and simple collision detection

## 🧠 How It Works

- The game area is simulated using simple loops and printed characters.
- The dinosaur (`D`) jumps when you press the **spacebar**.
- Trees (`T`) move from right to left simulating movement.
- Game ends when the dino collides with a tree on the ground.

## 🖥️ Requirements

- **Windows OS** (uses `windows.h` and `conio.h`)
- A C++ compiler (e.g., `g++`)

## 🛠️ How to Compile and Run

Open terminal or command prompt and run:

```bash
g++ -o dino_game dino_game.cpp
./dino_game
```

> ⚠️ Make sure you are on a Windows machine since this game uses `Sleep()` and `getch()`.

## 📸 Screenshot (Text Example)

```
Score: 5
       
       
       
       
       
       
       
       
       
D
__T______________________T_______T_______T_____
```

## ⚠️ Notes

- Works best on **Windows Command Prompt**.
- Uses `system("cls")` and `Sleep()` which are platform-dependent.
- The use of `#include <bits/stdc++.h>` is a GCC extension and can be replaced with standard includes for portability.

## 📂 File Structure

```
dino_game.cpp  # Source code for the game
README.md      # Project description and instructions
```

## ✨ Future Improvements

- Add high-score saving
- Cross-platform support (replace Windows-specific code)
- Add sound effects
- More obstacles or power-ups

## 📜 License

This project is licensed under the [MIT License](LICENSE).
