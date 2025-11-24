# 🚀 C++ Learning Journey

A collection of my weekly C++ practice projects, focusing on data structures, algorithms, and low-level logic implementation. This repository tracks my progress from basic control flow to complex memory manipulation.

## 📂 Repository Contents

| Project | Type | Key Concepts |
| :--- | :--- | :--- |
| [**BigInt Subtraction**](#1-bigint-subtraction-custom-implementation) | Algorithm | Strings, Arbitrary Precision Arithmetic, Memory Management |
| [**Conway's Game of Life**](#2-conways-game-of-life-simulation) | Simulation | 2D Arrays, Buffer Grids, Terminal Animation |
| [**The Three Doors**](#3-the-three-doors-logic-puzzles) | Logic Puzzle | Conditional Logic, Bitwise Operations, Mathematical Constraints |

---

## 1. BigInt Subtraction (Custom Implementation)
**File:** [`bigint_subtraction.cpp`](bigint_subtraction.cpp)

A raw implementation of Large Integer subtraction using C++ character arrays. This program bypasses standard `long long` limits by treating numbers as strings, allowing for calculations on massive figures.

### ✨ Features
- **Arbitrary Precision:** Capable of subtracting numbers with up to ~1000 digits.
- **Negative Support:** Correctly handles scenarios where `B > A` (e.g., `10 - 20 = -10`).
- **Manual Arithmetic:** Implements "borrowing" logic manually without external BigInt libraries.

---

## 2. Conway's Game of Life (Simulation)
**File:** [`pattern_generator.cpp`](pattern_generator.cpp)

A terminal-based implementation of **Conway’s Game of Life**. The simulation evolves in discrete time steps using a double-buffer system (current/next generation) to ensure simultaneous cell updates.

### 🕹️ How It Works
- **Rules:**
  - **Survival:** Alive cells with 2 or 3 neighbors stay alive.
  - **Death:** Cells die from underpopulation (<2 neighbors) or overpopulation (>3 neighbors).
  - **Reproduction:** Dead cells with exactly 3 neighbors become alive.
- **Visuals:** Uses `*` for alive cells and `.` for dead cells.
- **Animation:** Includes frame clearing and time delays for a smooth terminal animation effect.

---

## 3. The Three Doors (Logic Puzzles)
**File:** [`door_logic.cpp`](door_logic.cpp)

A compiled challenge focusing on complex `else-if` ladders and boolean logic. The program simulates three distinct "doors," each requiring specific mathematical conditions to open.

### 🚪 Door Rules

| Door Name | Condition to Open | Failure Condition |
| :--- | :--- | :--- |
| **Door 1: The Prime Door** | `A` is Prime **AND** `A < B` | `A` is 1 or negative |
| **Door 2: The Parity Trap** | `B` and `C` have different parity (one even, one odd) **AND** `(B + C)` is divisible by 3 | N/A |
| **Door 3: The Devil's XOR** | **Exactly one** of the following is true:<br>• `A > 50`<br>• `C` is a perfect square<br>• `B` is between [10, 20] | Fails if >1 are true OR if 0 are true |

---

## 🛠️ How to Run
To run any of these files, ensure you have a C++ compiler (like G++) installed.

1. **Clone the repository:** 
   git clone https://github.com/c47xd/cpp-practice.git
2. **Compile a file (example):**
 g++ bigint_subtraction.cpp -o bigint
3. **Run the executable:**
./bigint





---
*Author: [c47xd]*