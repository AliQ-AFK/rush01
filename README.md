# 🚀 Rush 01: Backtracking Puzzle Solver

## 🌟 Overview
Welcome to **Rush 01**, a grid-solving game developed during the **second Rush project** of the Piscine at **42 Berlin**! 🎓 This was a whirlwind 48-hour challenge where we tackled **backtracking algorithms** to solve puzzles efficiently under intense time pressure.

This program is designed to handle grids up to **9x9**, but beware—larger grids take longer to solve due to the computational intensity of backtracking! For smaller grids (like **4x4**), the solution is lightning-fast ⚡.

---

## 🎮 How It Works
The game revolves around solving a grid-based puzzle. The rules are simple:
- **Input constraints**: These numbers tell the program how the grid should look from different perspectives.
  - **Top** constraints: View from the top.
  - **Bottom** constraints: View from the bottom.
  - **Left** constraints: View from the left.
  - **Right** constraints: View from the right.
- The program uses **backtracking** to fill the grid and checks if it satisfies all constraints.

---

## 💻 Demo

1. **Compile the Program**  
   First, compile the program using the provided Makefile:
   ```bash
   make
   ```
  Run the Program
  Pass the constraints as a single string when running the program:
  ```bash
./solution "3 3 1 2 2 1 2 4 2 4 2 1 1 2 3 3"
  ```
  This example is for a 4x4 grid.
  Constraints are grouped as: top, bottom, left, right.  
  Possible OutputsIt seems there was an issue saving the file. However, you can copy and paste the following content into a file named `README.md` in your project directory:

---

```markdown
# 🚀 Rush 01: Backtracking Puzzle Solver

## 🌟 Overview
Welcome to **Rush 01**, a grid-solving game developed during the **second Rush project** of the Piscine at **42 Berlin**! 🎓 This was a whirlwind 48-hour challenge where we tackled **backtracking algorithms** to solve puzzles efficiently under intense time pressure.

This program is designed to handle grids up to **9x9**, but beware—larger grids take longer to solve due to the computational intensity of backtracking! For smaller grids (like **4x4**), the solution is lightning-fast ⚡.

---

## 🎮 How It Works
The game revolves around solving a grid-based puzzle. The rules are simple:
- **Input constraints**: These numbers tell the program how the grid should look from different perspectives.
  - **Top** constraints: View from the top.
  - **Bottom** constraints: View from the bottom.
  - **Left** constraints: View from the left.
  - **Right** constraints: View from the right.
- The program uses **backtracking** to fill the grid and checks if it satisfies all constraints.

---

## 💻 Demo

1. **Compile the Program**  
   First, compile the program using the provided Makefile:
   ```bash
   make
   ```

2. **Run the Program**  
   Pass the constraints as a single string when running the program:
   ```bash
   ./solution "3 3 1 2 2 1 2 4 2 4 2 1 1 2 3 3"
   ```
   - This example is for a **4x4 grid**.
   - Constraints are grouped as: `top`, `bottom`, `left`, `right`.

3. **Possible Outputs**  
   - If the input is valid and a solution exists, the program will print the solved grid:
     ```
     1 2 3 4
     4 3 2 1
     2 1 4 3
     3 4 1 2
     ```
   - If no solution exists or the input is invalid:
     ```
     Error
     ```

---

## 🛠️ Input Rules
1. The grid must be square (e.g., 4x4, 5x5, 9x9).
2. The input string should match the grid size:
   - For a **4x4 grid**, there are `4 x 4 = 16` numbers (4 constraints for each side).
3. Constraints must follow the order: `top`, `bottom`, `left`, `right`.
4. Invalid input or unsolvable puzzles will return `Error`.

---

## 🌍 About the Project
This project was completed during the **Piscine** at **42 Berlin**. We had to start from scratch on **Friday at 18:42** and submit by **Sunday at 23:42**. 🕒 Talk about working under pressure!

### Meet the Team 👩‍💻👨‍💻
- **Viktor**: The debugger-in-chief 🐛
- **Alyona**: The backtracking wizard 🪄
- **Ali Qeblawi**: The recursive mastermind 🔁

We worked together to design, implement, and debug this program, and we’re proud of what we accomplished in such a short time!

---

## ⚠️ Limitations
- The program can handle grids up to **9x9**, but larger grids take longer to solve because of the computational complexity of backtracking. ⏳
- It’s a prototype created under time constraints, so there may be edge cases that aren't fully optimized.

---

## ✨ What We Learned
1. The beauty of **recursion** and how powerful backtracking can be.
2. How to manage memory effectively under pressure (and debug memory leaks 🧠).
3. The value of teamwork and clear communication when the clock is ticking. ⏰
4. Handling user input and validating constraints dynamically.

---

## ❤️ Like What You See?
If you enjoyed this project or found it inspiring, feel free to **star this repository** ⭐ and share your thoughts! We’d love to hear from you and connect with fellow problem-solvers.
```
