# datatype-program-cpp

This repository contains basic examples and explanations for using bitwise operators in C++, including how to set, reset, toggle, and check bits uniquely.
Bitwise operators are special operators in programming languages like C++ that perform operations directly on the binary representation of integers. Unlike arithmetic operators that work on values as a whole, bitwise operators manipulate individual bits (0s and 1s) in the binary form of numbers.

Each integer in memory is stored as a sequence of bits (typically 32 or 64 bits). Bitwise operations allow you to access, modify, or analyze these bits efficiently.

Setting and Resetting Bits
Sometimes you want to turn on or off specific bits inside an integer without affecting the other bits.

Setting a bit means changing a particular bit to 1.

Resetting (clearing) a bit means changing a particular bit to 0.

Using bitwise operators:

To set the nth bit:
Use bitwise OR with a mask where only the nth bit is 1.
Example: num = num | (1 << n);
This leaves all other bits unchanged and ensures the nth bit is set to 1.

To reset the nth bit:
Use bitwise AND with a mask where all bits are 1 except the nth bit, which is 0.
Example: num = num & ~(1 << n);
This clears the nth bit while leaving all other bits unchanged.


Overview
Bitwise operators work directly on the binary representation of integers, allowing efficient manipulation of individual bits.

Common Bitwise Operators
| Operator | Description                    | Example    |     |     |
| -------- | ------------------------------ | ---------- | --- | --- |
| `&`      | Bitwise AND                    | `a & b`    |     |     |
| \`       | \`                             | Bitwise OR | \`a | b\` |
| `^`      | Bitwise XOR                    | `a ^ b`    |     |     |
| `~`      | Bitwise NOT (one's complement) | `~a`       |     |     |
| `<<`     | Left shift                     | `a << 2`   |     |     |
| `>>`     | Right shift                    | `a >> 3`   |     |     |
