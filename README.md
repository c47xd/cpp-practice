# cpp-practice
These are the practice problems i did/doing .
# Practice 1 (conditions) #p1(conditions).cpp  :
The Challenge: “Three-Door Heist Logic Simulator”

You’re a thief trying to open a vault with three security doors. Each door uses a different rule.
You’ll input three numbers (A, B, C), and your program decides which doors open.

You must print exactly which doors unlock and which fail.

Door Rules (these force you to stack conditions well):

Door 1 — The Prime Door
Opens only if A is prime and A < B.
If A is 1 or negative → auto-fail.

Door 2 — The Parity Trap
Opens if

B and C have different parity (one even, one odd)

AND (B + C) is divisible by 3

Door 3 — The “Devil’s XOR” Door
Opens if exactly one of the following is true:

A > 50

C is a perfect square

B is between 10 and 20 (inclusive)

If more than one is true → fails. If none true → fails.
