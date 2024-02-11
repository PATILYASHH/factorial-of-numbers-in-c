# Factorial Calculator

This is a simple C program that calculates the factorial of a given non-negative integer.

## Features

- Calculates the factorial of a number entered by the user.
- Handles input validation for non-negative integers.
- Allows the user to retry with a new input if desired.

## Requirements

- C compiler (e.g., GCC, Clang)

## Usage

1. Clone the repository or download the source code.
2. Compile the program using a C compiler. For example, using GCC:

    ```bash
    gcc factorial.c -o factorial
    ```

3. Run the compiled executable:

    ```bash
    ./factorial
    ```

4. Enter a non-negative integer when prompted.
5. The program will output the factorial of the entered number.
6. Optionally, you can choose to retry with a new input by entering `1` when prompted.

## Example

Enter a number to find factorial: 5
Factorial of 5 is 120

Do you want to retry? (Enter 1 for yes, 0 for no): 1
Enter a number to find factorial: 8
Factorial of 8 is 40320

Do you want to retry? (Enter 1 for yes, 0 for no): 0
Exiting program. Goodbye!
