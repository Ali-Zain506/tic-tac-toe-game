# 🎮 Tic Tac Toe

A simple console-based Tic Tac Toe game built in C++ as a personal project to practice object-oriented programming, game logic, and problem-solving.

---
## 🖥️ Output

### Gameplay

<img width="329" height="236" alt="Output png" src="https://github.com/user-attachments/assets/980b9f45-acbe-4fec-ba3b-20cdd9f063e9" />


### Game Statistics

<img width="410" height="168" alt="Output png (2)" src="https://github.com/user-attachments/assets/e17f91c4-9996-40c2-9c6c-be60a2c58828" />

---


## 🎮 Game Design

The game is played on a 3×3 board by two players. Player X starts first, and both players take turns entering a row and column to place their mark.

The game ends when:
- A player gets three marks in a row.
- All spaces are filled without a winner, resulting in a draw.

---

## 🧩 Code Structure

The game is organized using a `Tic_tac` class.

### Main Components

- `display_board()` — Displays the current game board and player turn.
- `playerName()` — Takes the names of both players.
- `input()` — Takes row and column input from the player.
- `update()` — Places the player's mark and checks the game result.
- `checkWinner()` — Checks rows, columns, and diagonals for a winner.
- `checkDraw()` — Checks whether the board is full without a winner.
- `changePlayer()` — Switches the turn between X and O.
- `checkStats()` — Updates game and win statistics.
- `displayStats()` — Displays the current game statistics.
- `resetGame()` — Clears the board and prepares a new game.

### Main Class

**`Tic_tac`**

The class handles the main game functionality, including:

- Board management
- Player management
- Player input
- Winner detection
- Game state
- Game statistics
- Board display

### Main Functions

- `display_board()` — Displays the current game board.
- `input()` — Takes row and column input from the player.
- `update()` — Updates the selected board position.
- `changePlayer()` — Switches between X and O.
- `checkWinner()` — Checks whether a player has won.
- `checkStats()` — Updates the game statistics.
- `displayStats()` — Displays the current statistics.
- `get_gameOver()` — Returns the current game state.

The `main()` function handles the game menu and controls the overall flow of the program.

---

## ✨ Features

- Two-player Tic Tac Toe gameplay
- Player name input for X and O
- 3×3 game board
- Input validation for rows and columns
- Winner detection for rows, columns, and diagonals
- Draw detection
- Play Again option
- Automatic board reset for a new game
- Game statistics
- Separate win counts for both players
- Draw and total games tracking
- Colored console output
- Game rules section
---

## 🛠️ Technologies Used

- **C++**
- **Object-Oriented Programming**
- **Arrays**
- **Functions**
- **Loops**
- **Conditional Statements**
- **Console Input/Output**

---

## 🔮 What I Want to Add Next

Some features I would like to add in future versions:

- Draw detection
- Play again option
- Single-player mode
- AI opponent
- Improved console interface
- More detailed game statistics

---
## ▶️ How to Run

1. Download or clone this repository.
2. Open `TicTacToe.cpp` in a C++ compiler or IDE.
3. Compile the program.
4. Run the program from the console.
5. Enter player names and start playing.
---

## 📌 Project Status

The current version is a working two-player console-based Tic-Tac-Toe game.

More features can be added in future updates.
---
## 🚀 Future Improvements

Some features I would like to add in the future:

- Single-player mode with a computer opponent
- Difficulty levels
- Better input handling
- More game customization options
- Improved console interface
