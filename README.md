# Tic-Tac-Toe Game 🎮

A simple console-based Tic-Tac-Toe game built in C++ using Object-Oriented Programming.

The game allows two players to play against each other using a 3×3 board. Players take turns placing X and O until one player wins.

---

## 🎮 Game Design

The game is designed for two players:

- Player X starts the game.
- Players enter a row and column to place their symbol.
- The board is updated after every valid move.
- The game checks for a winner after each move.
- The game ends when a player gets three of their symbols in a row.

The board uses a simple 3×3 layout to keep the gameplay easy to understand and use.

---

## 🏗️ Code Structure

The project is built around a `Tic_tac` class.

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

- 🎮 Two-player Tic-Tac-Toe
- 3×3 game board
- Player turn system
- Row and column input
- Input validation
- Occupied-position checking
- Automatic winner detection
- X and O win statistics
- Total games played
- Game rules section
- Console colors for better display
- Simple and clean console interface

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

1. Clone or download this repository.
2. Open the `.cpp` file in a C++ IDE or code editor.
3. Compile the program.
4. Run the program from the terminal.

---

## 📌 Project Status

The current version is a working two-player console-based Tic-Tac-Toe game.

More features can be added in future updates.
