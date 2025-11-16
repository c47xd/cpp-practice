# cpp-practice
These are the practice problems i did/doing .
# Practice 1 (else-if ladder) :

  Door 1 — The Prime Door  
  Opens only if A is prime and A < B.  
  If A is 1 or negative → auto-fail.  
  Door 2 — The Parity Trap  
  Opens if B and C have different parity (one even, one odd) AND (B + C) is divisible by 3  
  Door 3 — The “Devil’s XOR” Door Opens if exactly one of the following is true:  
  A > 50 , C is a perfect square , B is between 10 and 20 (inclusive)  
  If more than one is true → fails. If none true → fails.  
# Practice 2 (Arrays)
  This program implements Conway’s Game of Life using a two-dimensional character grid. Each cell has two possible states: alive (*) or dead (.). The simulation  evolves in discrete time steps based on the following rules applied to every cell simultaneously:

Count the eight neighboring cells.

If the current cell is alive:

It survives if it has exactly 2 or 3 living neighbors.

Otherwise, it dies (underpopulation or overpopulation).

If the current cell is dead:

It becomes alive only if it has exactly 3 living neighbors (reproduction).

A temporary buffer grid is used to store the next generation to avoid modifying the current generation while still evaluating it.

The final state is printed frame-by-frame, creating an animation effect.

Additionally, this implementation includes:

Multiple predefined classic Game of Life patterns

Grid-size and iteration management per pattern

Terminal animation using screen clear and timed delays
## Files  
- [door_logic.cpp](door_logic.cpp)  
- [Game_Of_life.cpp](GameOfLifeCli)
