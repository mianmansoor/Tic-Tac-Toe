# 🎮 Tic Tac Toe Game in C++

This is a simple **2-player console-based Tic Tac Toe game** built in C++.

## 🧠 Features

- Player vs Player turn-based gameplay
- Win/draw detection logic
- Player names saved to a file (`playersnames.txt`)
- Replay functionality
- Input validation for safe and fair gameplay

## 📄 How It Works

- The game board is displayed using numbers 1–9 representing positions.
- Players take turns entering their move by choosing a number.
- The board updates after each move.
- The game checks for win conditions or a draw after every move.
- After the game ends, players are asked if they want to play again.

## 📁 File Structure

```

📦 TicTacToe/
├── code.cpp          # Main source code
├── playersnames.txt  # Auto-generated file that stores player names and game results
└── README.md         # Project documentation

````

## ✅ How to Run

1. Open the project in **Visual Studio Code** or any C++ IDE.
2. Compile and run the `code.cpp` file.
3. Follow the console instructions.

### Example:

```bash
g++ code.cpp -o tic_tac_toe
./tic_tac_toe
````

## ✏️ Sample Output

```
Tic Tac Toe

Player1 (X)  -  Player2 (O)

     |     |     
  1  |  2  |  3
_____|_____|_____
     |     |     
  4  |  5  |  6
_____|_____|_____
     |     |     
  7  |  8  |  9
     |     |     

Player1, enter a number:
```

## 💡 Future Improvements

* Add AI for single-player mode
* Improve UI with graphics (e.g., SFML or SDL)
* Store game history in a structured format (JSON or CSV)

## 🧑‍💻 Author

Mian Mansoor

