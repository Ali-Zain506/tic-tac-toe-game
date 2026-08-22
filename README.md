# 🎮 Tic Tac Toe

A console-based Tic Tac Toe game built in C++ as a personal project to practice Object-Oriented Programming, game logic, problem-solving, and basic AI decision-making.

---

## 🖥️ Output

### Gameplay

<img width="329" height="236" alt="Gameplay Output" src="https://github.com/user-attachments/assets/980b9f45-acbe-4fec-ba3b-20cdd9f063e9" />

### Game Statistics

<img width="410" height="168" alt="Game Statistics Output" src="https://github.com/user-attachments/assets/e17f91c4-9996-40c2-9c6c-be60a2c58828" />

---

## 🎮 Game Modes

### 👥 Player vs Player

Two players can play against each other.

- Player X starts first.
- Both players enter row and column numbers.
- Players take turns until there is a winner or a draw.

### 🤖 Player vs Computer

The player can play against a basic decision-making AI.

The AI can:

- Detect its own winning move.
- Block the player's winning move.
- Make a random move when there is no immediate winning or blocking opportunity.

---

## 🎮 Game Design

The game is played on a **3×3 board**.

The game ends when:

- A player gets three marks in a row.
- All spaces are filled without a winner, resulting in a draw.

The game checks all possible winning combinations:

- 3 rows
- 3 columns
- 2 diagonals

---

## 🧩 Code Structure

The game is organized using a `Tic_tac` class.

### Main Class

**`Tic_tac`**

The class manages:

- Board management
- Player management
- Current game state
- Winner detection
- Draw detection
- Game statistics
- Player vs Computer mode
- Board display

### Main Functions

| Function | Purpose |
|---|---|
| `display_board()` | Displays the current game board and player turn. |
| `playerName()` | Takes the names of both players. |
| `Playernamecomputer()` | Sets up Player vs Computer mode. |
| `input()` | Takes row and column input from the player. |
| `update()` | Places a player's mark and checks the game result. |
| `pvcMode()` | Handles computer moves and basic AI decision-making. |
| `checkWinner()` | Checks rows, columns, and diagonals for a winner. |
| `checkDraw()` | Checks whether the board is full without a winner. |
| `changePlayer()` | Switches the turn between X and O. |
| `checkStats()` | Updates win and game statistics. |
| `displayStats()` | Displays the current game statistics. |
| `resetGame()` | Resets the board for a new game. |
| `get_gameOver()` | Returns the current game state. |

---

## ✨ Features

- 🎮 Player vs Player mode
- 🤖 Player vs Computer mode
- 🧠 AI winning-move detection
- 🛡️ AI blocking of the opponent's winning move
- 🎲 Random AI moves when no immediate action is required
- 👤 Player name input
- 🔢 3×3 game board
- ✅ Row and column input validation
- 🏆 Winner detection
- 🤝 Draw detection
- 🔄 Play Again option
- ♻️ Automatic board reset
- 📊 Game statistics
- 🏅 Separate win counts for both players
- 📈 Total games and draws tracking
- 🎨 Colored console output
- 📖 Game rules section

---

## 🧠 AI Logic

The computer follows a simple decision-making strategy.

### 1. Winning Move

The AI first checks whether it can win the game with its next move.

```text
Can AI win?
    ↓
  Yes
    ↓
Make winning move
