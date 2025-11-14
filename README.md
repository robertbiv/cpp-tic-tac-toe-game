# C++ Multiplication Practice Program

A console-based multiplication practice program designed to help students improve their multiplication skills through interactive exercises.

## Description

This program generates random multiplication problems for students to solve. It provides immediate feedback with encouraging messages and tracks performance to determine if the student is ready to advance to the next level.

## Features

- **Random Problem Generation**: Creates multiplication problems with random numbers between 0 and 20
- **Interactive Learning**: Allows multiple attempts for each problem with encouraging feedback
- **Performance Tracking**: Monitors correct and incorrect answers
- **Motivational Messages**: Provides varied positive reinforcement for correct answers and encouragement for incorrect ones
- **Progress Assessment**: Determines readiness for the next level based on 75% accuracy threshold
- **Easy Exit**: Type `-1` at any time to end the session and see results

## Requirements

- C++ Compiler (supporting C++11 or later)
- Standard C++ libraries:
  - `<iostream>` for input/output
  - `<ctime>` for random seed
  - `<cstdlib>` for random number generation

## Compilation

### Using g++
```bash
g++ homework5.cpp -o multiplication_practice
```

### Using Visual Studio
Open the `Homework5.vcxproj` file in Visual Studio and build the solution.

## Usage

1. Run the compiled program:
   ```bash
   ./multiplication_practice
   ```

2. The program will display a multiplication problem:
   ```
   How much is X times Y (-1 to End)
   ? 
   ```

3. Enter your answer and press Enter
   - If correct, you'll receive a congratulatory message and move to the next question
   - If incorrect, you'll be encouraged to try again
   - Enter `-1` to end the session

4. After ending the session, you'll receive feedback:
   - **75% or higher**: "Congratulation, you are ready to go to the next level!"
   - **Below 75%**: "Please ask your teacher for extra help."

## Example Session

```
Welcome to Multiplication Program

How much is 5 times 7 (-1 to End)
? 35
Excellent!

How much is 12 times 3 (-1 to End)
? 36
Very good!

How much is 8 times 9 (-1 to End)
? -1

Congratulation, you are ready to go to the next level!
```

## Program Logic

The program uses several functions to organize its logic:

- **`main()`**: Controls the main program flow and displays final assessment
- **`questions()`**: Generates and presents multiplication problems, handles user input
- **`correct()`**: Displays random positive reinforcement messages
- **`wrong()`**: Displays random encouraging messages for incorrect answers
- **`percentage()`**: Calculates performance and determines advancement readiness

## Author

Robert Bennethum (rmb6287@psu.edu)

## Academic Information

- **Course**: CMPSC 121
- **Project**: Homework 5
- **Original Due Date**: November 5, 2021

## License

This is an academic project. Please respect academic integrity policies if using this code for educational purposes.
