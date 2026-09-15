🔢 Multiplier

A simple C++ command-line multiplier that can multiply two numbers, multiply a number by π, or multiply any number of values in bulk.

This project was built to practice multi-file C++ projects, functions, header files, dynamic arrays, loops, and basic input handling.

✨ Features

- Multiply two numbers
  - Multiplies two numbers at a time.
- Multiply by PI
  - Multiplies a number by π.
- Bulk multiplication
  - Enter any number of values and multiply them together.
- Menu-based interface
  - Simple command-line navigation.
- Input error handling
  - Handles invalid menu input.
- Multi-file structure
  - Functions, mathematical operations, and declarations are separated into different files.

📁 Project Structure

Multiplier/
├── Main.cpp
├── function.cpp
├── functiondecl.h
└── math.cpp

"Main.cpp"

Contains the main program loop and menu logic.

"function.cpp"

Contains general program functions such as:

- "welcome()"
- "goback()"
- "cinfail()"

"math.cpp"

Contains the multiplication functions:

- "multiplytwonumbers()"
- "multiplywithpi()"

"functiondecl.h"

Contains the function declarations shared between the source files.

🧮 Example

Two Numbers

Input:
1

Input 1st number:
12

Input 2nd number:
5

SOLUTION:
60

Multiply by PI

Input:
2

Input a number
10

SOLUTION:
31.4159

Bulk Multiplication

Input:
3

How many numbers do you want to bulk multiply:
5

Input 1 number:
2
Input 2 number:
3
Input 3 number:
4
Input 4 number:
5
Input 5 number:
6

720

🛠️ Concepts Practiced

This project uses:

- C++
- Functions
- Function declarations
- Header files
- Header guards
- Multiple ".cpp" files
- "iostream"
- "while" and "for" loops
- Arrays
- Dynamic memory allocation
- Pointers
- "new[]" and "delete[]"
- "double"
- Basic "cin" error handling

🚀 Future Improvements

Possible features for future versions:

- Better input validation
- More mathematical operations
- Better handling of edge cases
- Replace dynamic arrays with "std::vector"
- More advanced multiplication options
- Improved output formatting

📌 Status

Current version: Development

This is a learning project built while practicing C++ and experimenting with larger, multi-file programs.

---

«Built with C++ while learning, experimenting, and breaking things until they work. ⚙️»
