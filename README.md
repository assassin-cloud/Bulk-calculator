 # Bulk Calculator

 A simple menu-driven **C++ command-line calculator** designed to perform normal and bulk arithmetic operations.

 The project was created as a modular C++ application, with the user interface, function declarations, program control flow, and mathematical operations separated into different source files.

---

 ## Table of Contents

 - Overview
- Features
- Project Structure
- How the Program Works
- Operations
  - Multiplication
  - Addition
  - Subtraction
  - Division
  - Exponentiation
- Input Handling
- Memory Management
- Requirements
- Compilation
- Running the Program
- Example Session
- Source Files
- Implementation Details
- Known Limitations
- Possible Improvements
- Learning Objectives
- License

---

 ## Overview

 **Bulk Calculator** is a terminal-based calculator written in C++.

 Unlike a basic calculator that only operates on two numbers, this project also provides **bulk calculation** functionality. This allows the user to enter multiple numbers and perform an operation on all of them.

 For example, the user can calculate:

```
2 × 3 × 4 × 5
```

 or:

```
10 + 20 + 30 + 40
```

 The application uses a menu system that allows the user to select an operation and then choose between normal and bulk calculations.

---

 ## Features

 ### Basic arithmetic

 The calculator supports:

 - Multiplication
- Addition
- Subtraction
- Division

 ### Bulk calculations

 Multiple numbers can be processed in a single operation.

 Supported bulk operations:

 - Bulk multiplication
- Bulk addition
- Bulk subtraction
- Bulk division

 ### Multiplication by π

 The calculator provides a dedicated option for multiplying a number by π.

 The program uses:

```
π = 3.141592653589793
```

 ### Exponentiation

 The calculator supports:

 - Square
- Cube
- Custom integer exponent
- Zero exponent
- Negative integer exponent

 ### Error handling

 The program contains basic handling for:

 - Invalid menu input
- Invalid bulk sizes
- Division by zero

 ### Menu navigation

 The application provides separate menus for each mathematical operation and allows the user to return to the previous menu.

---

 # Project Structure

```
assassin-cloud-bulk-calculator/
└── Bulk-Calculator/
    ├── function.cpp
    ├── functiondecl.h
    ├── main.cpp
    └── math.cpp
```

 The project is divided into four source files.

---

 ## `main.cpp`

 `main.cpp` contains the main program loop and controls navigation through the menus.

 It is responsible for:

 - Starting the application.
- Displaying the main menu.
- Reading the user's menu selection.
- Opening operation-specific menus.
- Calling mathematical functions.
- Handling invalid menu selections.
- Returning to previous menus.
- Exiting the application.

 The main menu provides six choices:

```
1. Multiplier
2. Addition
3. Subtraction
4. Division
5. Exponentiation
6. Exit
```

---

 ## `function.cpp`

 `function.cpp` contains functions related primarily to:

 - Displaying menus.
- Reading user input.
- Handling invalid input.
- Returning to previous menus.

 Examples include:

```
double takedoubleinput();
int takeinputfromuser();

void welcome();

void multiplicationsection();
void additionsection();
void subtractionsection();
void divisionsection();
void exponentiationsection();

void goback();
void cinfail();
```

 This keeps interface-related functionality separate from the mathematical implementation.

---

 ## `functiondecl.h`

 `functiondecl.h` contains declarations for functions that are used across the different source files.

 The header also declares the global variable:

```
extern int userinput;
```

 The mathematical functions are declared here as well, allowing `main.cpp` and other source files to access them.

 The header uses an include guard:

```
#ifndef FUNCTIONDECL
#define FUNCTIONDECL

// declarations

#endif
```

 This prevents the header from being included multiple times within the same compilation unit.

---

 ## `math.cpp`

 `math.cpp` contains the calculator's mathematical functionality.

 It implements:

 - Two-number multiplication
- Multiplication by π
- Bulk multiplication
- Addition
- Bulk addition
- Subtraction
- Bulk subtraction
- Division
- Bulk division
- Square
- Cube
- Exponentiation

 The shared bulk-calculation functionality is implemented through:

```
double bulkcalculation();
```

---

 # How the Program Works

 When the application starts, it enters an infinite loop:

```
while(true)
```

 The main menu is displayed and the user selects an operation.

 For example:

```
=====================
   Bulk Calculator
=====================

1. Multiplier
2. Addition
3. Subtraction
4. Division
5. Exponentiation
6. Exit

Input:
```

 The selected menu option determines which section of the calculator is opened.

 For example, choosing:

```
1
```

 opens the multiplication menu.

 The user can then select one of the available multiplication operations.

 The program continues running until the user selects:

```
6. Exit
```

 from the main menu.

---

 # Operations

 ## Multiplication

 The multiplication menu contains three calculation options:

```
1. Multiply(Multiply only 2 numbers at a time)
2. Multiply number with PI(one number multiply by PI)
3. Multiply numbers in bulk
4. Exit
```

 ### Multiply two numbers

 The program asks for two numbers:

```
Input 1st number:
Input 2nd number:
```

 It then returns:

```
x * y
```

 For example:

```
Input 1st number:
5

Input 2nd number:
4

SOLUTION:
20
```

 ### Multiply by π

 The user enters one number and the program multiplies it by:

```
3.141592653589793
```

 For example:

```
Input a number
10

SOLUTION:
31.4159
```

 ### Bulk multiplication

 The user first specifies how many numbers should be calculated.

 For example:

```
How many numbers do you wanna bulk calculate:
4
```

 Then:

```
Input 1 number
2

Input 2 number
3

Input 3 number
4

Input 4 number
5
```

 The result is:

```
SOLUTION:
120
```

---

 # Addition

 The addition menu contains:

```
1. Addition(Add only 2 numbers at a time)
2. Add numbers in bulk
3. Exit
```

 ## Add two numbers

 The calculator accepts two numbers and returns their sum.

 Example:

```
Input 1st number:
15

Input 2nd number:
25

SOLUTION:
40
```

 ## Bulk addition

 The user can enter any positive number of values.

 Example:

```
How many numbers do you wanna bulk calculate:
4

Input 1 number
10

Input 2 number
20

Input 3 number
30

Input 4 number
40

SOLUTION:
100
```

---

 # Subtraction

 The subtraction menu contains:

```
1. Subtraction(Subtract only 2 numbers at a time)
2. Subtract numbers in bulk
3. Exit
```

 ## Subtract two numbers

 The calculator performs:

```
x - y
```

 Example:

```
Input 1st number:
50

Input 2nd number:
20

SOLUTION:
30
```

 ## Bulk subtraction

 For multiple values, subtraction is performed from left to right.

 For example:

```
100 - 20 - 10 - 5
```

 produces:

```
65
```

 The first number is used as the initial result:

```
result = p[0];
```

 and subsequent numbers are subtracted:

```
result -= p[i];
```

---

 # Division

 The division menu contains:

```
1. Division(Divide only 2 numbers at a time)
2. Divide numbers in bulk
3. Exit
```

 ## Divide two numbers

 The calculator performs:

```
x / y
```

 For example:

```
Enter 1st number:
100

Enter 2nd number:
4

SOLUTION:
25
```

 ### Division by zero

 Division by zero is explicitly checked.

 If the second number is zero, the program displays:

```
Can't divide by zero!
```

 and does not perform the division.

 ## Bulk division

 Bulk division works from left to right.

 For example:

```
100 / 2 / 5
```

 produces:

```
10
```

 The program also checks every divisor during a bulk calculation.

 If any divisor is zero, the calculation is stopped and:

```
Can't divide by zero!
```

 is displayed.

---

 # Exponentiation

 The exponentiation menu contains:

```
1. Square
2. Cube
3. Exponent
4. Exit
```

 ## Square

 The square operation calculates:

```
number × number
```

 For example:

```
Input number:
5

SOLUTION
25
```

 ## Cube

 The cube operation calculates:

```
number × number × number
```

 For example:

```
Input number:
3

SOLUTION
27
```

 ## Custom exponent

 The exponent function accepts:

 - A number
- An integer exponent

 For example:

```
Input number:
2

Input power/exponent:
5

SOLUTION:
32
```

 ### Zero exponent

 A non-zero number raised to the power of zero returns:

```
1
```

 For example:

```
2^0 = 1
```

 ### First power

 A number raised to the power of one returns the number itself:

```
2^1 = 2
```

 ### Negative exponents

 Negative exponents are also supported.

 For example:

```
2^-3 = 0.125
```

 The implementation calculates the positive power and then returns its reciprocal.

---

 # Input Handling

 The program has separate functions for integer and floating-point input.

 ## Integer input

```
int takeinputfromuser()
```

 This function reads an integer from `std::cin`.

 It is primarily used for:

 - Menu choices
- Number of values in bulk calculations
- Integer exponents

 ## Double input

```
double takedoubleinput()
```

 This function reads a `double`.

 It is used for mathematical values such as:

```
10
10.5
-4.25
```

---

 # Invalid Input Handling

 The program checks whether `std::cin` has entered a failed state after reading menu input.

 For example:

```
if(cin.fail()){
    cinfail();
}
```

 The `cinfail()` function performs:

```
cin.clear();
cin.ignore(1000,'\n');
```

 This clears the error state and removes invalid input from the input buffer.

 The program then displays:

```
Invalid Input!
```

---

 # Bulk Calculation System

 One of the main features of this project is the shared bulk-calculation function:

```
double bulkcalculation();
```

 Instead of implementing four separate bulk algorithms, the program uses the same function for:

 - Multiplication
- Addition
- Subtraction
- Division

 The selected operation is determined using the global:

```
userinput
```

 For example:

```
if(userinput == 1){
    // multiplication
}
else if(userinput == 2){
    // addition
}
else if(userinput == 3){
    // subtraction
}
else if(userinput == 4){
    // division
}
```

 This allows functions such as:

```
void bulkmultiplication();
void bulkaddition();
void bulksubtraction();
void bulkdivision();
```

 to reuse the same underlying calculation system.

---

 # Memory Management

 The current implementation uses a dynamically allocated array for bulk calculations.

 The array is created using:

```
double* p = new double[size];
```

 The values are stored in the allocated memory.

 After the calculation is complete, the memory is released using:

```
delete[] p;
```

 The pointer is then set to:

```
p = nullptr;
```

 This prevents the pointer from continuing to reference the released memory.

---

 # Requirements

 To build this project, you need:

 - A C++ compiler
- C++11 or newer
- A terminal/command prompt

 Compatible compilers include:

 - GCC
- Clang
- MSVC

 No external libraries are required.

 The project only uses standard C++ headers such as:

```
<iostream>
```

---

 # Compilation

 Navigate to the directory containing the source files:

```
Bulk-Calculator/
```

 Then compile:

```
g++ -std=c++11 main.cpp function.cpp math.cpp -o calculator
```

 Alternatively, using C++17:

```
g++ -std=c++17 main.cpp function.cpp math.cpp -o calculator
```

 Using C++20:

```
g++ -std=c++20 main.cpp function.cpp math.cpp -o calculator
```

---

 # Running the Program

 ## Linux

 After compilation:

```
./calculator
```

 ## macOS

```
./calculator
```

 ## Windows

 With MinGW:

```
calculator.exe
```

---

 # Example Session

 A complete example might look like:

```
=====================
   Bulk Calculator
=====================

1. Multiplier
2. Addition
3. Subtraction
4. Division
5. Exponentiation
6. Exit

Input:
1

=================
   Multiplier
=================

1. Multiply(Multiply only 2 numbers at a time)
2. Multiply number with PI(one number multiply by PI)
3. Multiply numbers in bulk
4. Exit

Input:
3

How many numbers do you wanna bulk calculate:
4

Input 1 number
2

Input 2 number
3

Input 3 number
4

Input 4 number
5

SOLUTION:
120

Type anything to go back to main menu:
back
```

 The user is then returned to the multiplication menu.

---

 # Source Files

 | File | Purpose |
| --- | --- |
| `main.cpp` | Main program loop and menu navigation |
| `function.cpp` | User interface, input, and menu functions |
| `functiondecl.h` | Function declarations and shared declarations |
| `math.cpp` | Mathematical calculations |

---

 # Function Reference

 ## Input Functions

```
double takedoubleinput();
```

 Reads and returns a `double`.

```
int takeinputfromuser();
```

 Reads and returns an `int`.

---

 ## Menu Functions

```
void welcome();
void multiplicationsection();
void additionsection();
void subtractionsection();
void divisionsection();
void exponentiationsection();
```

 These functions display the various menus.

---

 ## Utility Functions

```
void goback();
```

 Waits for the user to enter something before returning to the previous menu.

```
void cinfail();
```

 Handles an input-stream failure.

---

 ## Multiplication Functions

```
double multiplytwonumbers();
double multiplywithpi();
void bulkmultiplication();
```

---

 ## Addition Functions

```
double addition();
void bulkaddition();
```

---

 ## Subtraction Functions

```
double subtraction();
void bulksubtraction();
```

---

 ## Division Functions

```
double division();
void bulkdivision();
```

---

 ## Exponentiation Functions

```
double square();
double cube();
double exponent();
```

---

 # Design

 The project follows a simple separation-of-responsibilities approach.

```
                 ┌─────────────────┐
                 │    main.cpp     │
                 │ Program Control │
                 └────────┬────────┘
                          │
                          ▼
                 ┌─────────────────┐
                 │ function.cpp    │
                 │ Menus / Input   │
                 └────────┬────────┘
                          │
                          ▼
                 ┌─────────────────┐
                 │    math.cpp     │
                 │ Calculations    │
                 └─────────────────┘

                 functiondecl.h
                 Shared declarations
```

 `main.cpp` decides **what the user wants to do**.

 `function.cpp` handles much of **what the user sees and how input is collected**.

 `math.cpp` performs **the actual calculations**.

 `functiondecl.h` allows these files to communicate with each other.

---

 # Known Limitations

 The current version is intentionally simple, but there are several areas that could be improved.

 ## 1\. Raw dynamic memory

 Bulk calculations currently use:

```
new double[size]
```

 and:

```
delete[] p
```

 Modern C++ would generally favor:

```
std::vector<double>
```

 because it automatically manages memory.

---

 ## 2\. Global state

 The program uses:

```
int userinput {};
```

 as a global variable.

 `bulkcalculation()` depends on this variable to determine which operation should be performed.

 A cleaner design would pass the operation directly to the calculation function.

---

 ## 3\. Input validation

 Menu input is checked for `cin.fail()`, but numerical calculation input is not consistently validated.

 For example, entering non-numeric data when a `double` is expected can cause the input stream to enter a failed state.

 More comprehensive validation would make the program more robust.

---

 ## 4\. Exponent implementation

 The exponent function manually performs multiplication rather than using:

```
std::pow()
```

 This is useful as a programming exercise, but `std::pow()` would provide a more general mathematical implementation.

---

 ## 5\. Integer exponents only

 The current exponent function accepts an `int` exponent.

 Therefore, values such as:

```
2^0.5
```

 are not supported.

---

 ## 6\. Large exponents

 Repeated multiplication can become inefficient for very large exponents.

 A more efficient exponentiation algorithm could be used.

---

 ## 7\. `goback()` input behavior

 The function:

```
void goback()
```

 requires the user to enter something before returning.

 This works for a simple command-line program, but a more polished interface could use a clearer prompt or wait for an Enter key press.

---

 # Possible Improvements

 Future versions could include:

 ### Modern C++

 - Replace raw arrays with `std::vector`.
- Use `std::pow()` for exponentiation.
- Avoid global variables.
- Use `constexpr` for mathematical constants such as π.
- Use stronger type and input validation.

 ### More operations

 Possible additional operations include:

 - Modulus
- Square root
- Absolute value
- Logarithms
- Factorial
- Percentage
- Natural logarithm
- Trigonometric functions

 ### User experience

 The interface could be improved with:

 - Better formatting.
- Clearer error messages.
- More consistent prompts.
- Calculation history.
- A repeat-calculation option.
- A cleaner menu-navigation system.

 ### Software architecture

 The project could eventually be redesigned using classes.

 For example:

```
Calculator
├── InputHandler
├── Menu
├── CalculatorOperations
└── History
```

 This would make the application easier to extend as more functionality is added.

---

 # Learning Objectives

 This project demonstrates several fundamental C++ concepts.

 ### Functions

 The calculator uses multiple functions to break the program into manageable pieces.

 ### Header files

 `functiondecl.h` demonstrates how declarations can be shared between multiple `.cpp` files.

 ### Multiple source files

 The project demonstrates compiling several source files into one executable.

 ### Loops

 The application uses `while` loops to maintain its menu system.

 ### Conditional statements

 `if`, `else if`, and `else` statements are used to determine which operation the user selected.

 ### Dynamic memory

 The bulk calculator demonstrates dynamic array allocation using:

```
new[]
```

 and deallocation using:

```
delete[]
```

 ### Input validation

 The project demonstrates basic handling of failed `std::cin` operations.

 ### Global variables

 The project also demonstrates how an `extern` declaration can expose a global variable between source files.

---

 # Future Version Roadmap

 A potential development a learning-oriented C++ application. Its simple architecture makes it useful for practicing fundamental can be progressively improved toward modern C++ practices roadmap could look like this:

```
Version 1.0
├── Basic arithmetic
├── Bulk calculations
├── Exponentiation
└── Basic error handling

Version 1.1
├── Better input validation
├── std::vector
└── Remove global operation state

Version 1.2
├── More mathematical operations
├── Calculation history
└── Improved menus

Version 2.0
├── Object-oriented design
├── Automated tests
└── More advanced calculator functionality
```

---

 # Contributing

 Contributions and improvements are welcome.

 A typical workflow is:

 1. Fork or copy the project.
2. Create a new branch for your changes.
3. Make your changes.
4. Compile the project.
5. Test the calculator with valid and invalid inputs.
6. Submit your changes.

 When adding a new mathematical operation, consider updating:

 - `functiondecl.h`
- `math.cpp`
- `main.cpp`
- The relevant menu in `function.cpp`
- This README

---

 # Testing Checklist

 Before considering a change complete, test:

 - [ ] Two-number multiplication
- [ ] Multiplication by π
- [ ] Bulk multiplication
- [ ] Two-number addition
- [ ] Bulk addition
- [ ] Two-number subtraction
- [ ] Bulk subtraction
- [ ] Two-number division
- [ ] Bulk division
- [ ] Division by zero
- [ ] Square
- [ ] Cube
- [ ] Positive exponent
- [ ] Zero exponent
- [ ] Negative exponent
- [ ] Invalid menu input
- [ ] Invalid bulk size
- [ ] Returning to previous menus
- [ ] Exiting the program

---

 # License

 No license is currently specified for this project.

 If this project is going to be publicly distributed, a license such as the MIT License can be added in a separate `LICENSE` file.

---

 # Author

 **Bulk Calculator**

 A C++ command-line calculator project focused on practicing:

 - C++ functions
- Header files
- Multiple source files
- Loops
- Conditional statements
- Input handling
- Dynamic memory
- Basic mathematical algorithms

---

 ## Final Notes

 This project is primarily a learning-oriented C++ application. Its simple architecture makes it useful for practicing fundamental programming concepts while still providing a functional calculator with both ordinary and bulk arithmetic operations.

 The code can be progressively improved toward modern C++ practices by replacing raw memory management, eliminating global state, strengthening input validation, and introducing a more modular architecture.
