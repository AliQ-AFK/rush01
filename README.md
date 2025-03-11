# 🚀 Rush 01: Backtracking Skyscrapper Puzzle Solver

## 🌟 Overview
Welcome to **Rush 01**, an exciting grid-solving adventure born from the second Rush project of the Piscine at 42 Berlin! 🎓 This was a whirlwind 48-hour challenge where we dove headfirst into the world of backtracking algorithms, racing against the clock to solve puzzles with flair and efficiency!

This program is designed to tackle grids up to **9x9**, but beware—larger grids can be a bit of a brain-buster! For smaller grids (like **4x4**), the solution is lightning-fast ⚡, making it a thrilling experience!

## 🎮 How It Works
The game revolves around solving a captivating grid-based puzzle. The rules are simple yet intriguing:

- **Input constraints**: These numbers dictate how the grid should look from different perspectives:
  - **Top constraints**: A bird's-eye view from above.
  - **Bottom constraints**: The view from below.
  - **Left constraints**: Peeking from the left side.
  - **Right constraints**: Glancing from the right side.

Our program employs the magic of backtracking to fill the grid and checks if it meets all the constraints. It’s like a puzzle-solving dance! 💃🕺

## 💻 Demo
![demo](https://github.com/user-attachments/assets/b8f6505f-2fe1-4a99-b80e-24b0e220d4bc)
### Compile the Program
First, let’s get this party started by compiling the program using the provided Makefile:
```
make
```

### Run the Program
Now, pass the constraints as a single string when running the program:
```
./solution "3 3 1 2 2 1 2 4 2 4 2 1 1 2 3 3"
```
This example is for a **4x4** grid. Constraints are grouped as: top, bottom, left, right. Get ready for some puzzle-solving action!

### Possible Outputs
If the input is valid and a solution exists, the program will print the solved grid:
```
1 2 3 4
4 3 2 1
2 1 4 3
3 4 1 2
```
If no solution exists or the input is invalid, you’ll see:
```
Error
```

## 🛠️ Input Rules
- The grid must be square (e.g., **4x4**, **5x5**, **9x9**).
- The input string should match the grid size:
  - For a **4x4** grid, there are **4 x 4 = 16** numbers (4 constraints for each side).
- Constraints must follow the order: top, bottom, left, right.
- Invalid input or unsolvable puzzles will return:
```
Error
```

## 🌍 About the Project
This project was completed during the exhilarating Piscine at 42 Berlin. We kicked off on Friday at **18:42** and had to submit by Sunday at **23:42**. 🕒 Talk about working under pressure and rising to the challenge!

### Meet the Team 👩‍💻👨‍💻

**Viktor**: The mastermind, guiding the team and leading the way.

**Alyona**: The input validation expert, ensuring everything worked as expected.

**Ali**: Focused on input validation and debugging, helping to refine the solution.


It was a team effort where everyone played a key role.


## ⚠️ Limitations
- The program can handle grids up to **9x9**, but larger grids can take a bit longer to solve due to the computational complexity of backtracking. ⏳
- It’s a prototype created under time constraints, so there may be edge cases that aren't fully optimized. But hey, that’s part of the adventure!

## ✨ What We Learned
- The beauty of recursion and the sheer power of backtracking.
- How to manage memory effectively under pressure (and debug those sneaky memory leaks 🧠).
- The value of teamwork and clear communication when the clock is ticking. ⏰
- Handling user input and validating constraints dynamically is a game-changer!

## ❤️ Like What You See?
If you enjoyed this project or found it inspiring, feel free to star this repository ⭐ and share your thoughts! I’d love to hear from you and connect with fellow problem-solvers. Let’s keep the puzzle-solving spirit alive!
```
