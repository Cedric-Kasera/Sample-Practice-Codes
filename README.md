# Sample Practice Codes

A comprehensive collection of C and C++ programming practice codes covering fundamental concepts, algorithms, and problem-solving techniques.

## 📋 Table of Contents

- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Technologies Used](#technologies-used)
- [Program Categories](#program-categories)
  - [C Programs](#c-programs)
  - [C++ Programs](#c-programs-1)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Compilation](#compilation)
  - [Running Programs](#running-programs)
- [Program Descriptions](#program-descriptions)
- [Learning Objectives](#learning-objectives)
- [Contributing](#contributing)
- [Author](#author)
- [License](#license)

## 🎯 Overview

This repository contains a diverse collection of practice programs written in C and C++. These programs are designed to help learners understand fundamental programming concepts, data structures, algorithms, and object-oriented programming principles. Each program focuses on specific topics ranging from basic loops and conditionals to more advanced concepts like recursion, classes, and mathematical computations.

## 📁 Repository Structure

```
Sample-Practice-Codes/
├── My Codes - C program/       # C programming examples
│   ├── Basic programs
│   ├── Mathematical algorithms
│   ├── Pattern printing
│   ├── Functions and recursion
│   └── Array operations
├── C++ PROGRAM LANGUAGE/       # C++ programming examples
│   ├── Object-oriented programs
│   ├── Class implementations
│   └── Advanced concepts
└── README.md                   # This file
```

## 💻 Technologies Used

- **C Programming Language** - ANSI C, C99
- **C++ Programming Language** - C++11 and later
- **Compiler Compatibility**:
  - GCC (GNU Compiler Collection)
  - MinGW (for Windows)
  - Clang
  - Visual Studio C/C++ Compiler

## 📚 Program Categories

### C Programs

The `My Codes - C program` directory contains 50 C programs organized by topic:

#### 1. **Mathematical Algorithms**
- **GCD Programs**: Multiple implementations for finding Greatest Common Divisor
  - `GCD.c` - Basic GCD algorithm
  - `GCD Function.c` - GCD using functions
  - `Finding GCD(Euclidian Algorithm).c` - Euclidean algorithm implementation (note: filename has typo)
  - `Recursive GCD.C` - Recursive approach
  - `GCD 1.C` - Alternative GCD implementation
- **LCM Programs**: Various Least Common Multiple implementations
  - `LCM.c`, `LCM2.c`, `LCM 3.C` - Different LCM algorithms
  - `LCM Function.c` - Function-based LCM
- **Factorial Programs**
  - `Factorial function 1.c` - Factorial calculation
- **Fibonacci Sequence**
  - `Fibonacci sequence.c` - Classic Fibonacci implementation
  - `Fibonacci 2.c` - Alternative approach
- **Perfect Numbers**
  - `Perfect numbers.c` - Finding perfect numbers

#### 2. **Trigonometric & Mathematical Functions**
- `Sine of an angle.c` - Sine calculation
- `Sine of an angle 1.c` - Alternative implementation
- `Sigmoid function.c` - Sigmoid mathematical function
- `Sigmoid.c` - Alternative sigmoid implementation
- `Exponential(e).c` - Exponential calculations
- `Degrees Conversion.c` - Temperature/angle conversion
- `Degrees Conversion 2.c` - Enhanced conversion

#### 3. **Pattern Printing Programs**
- `Star shape.c` - Basic star pattern
- `Hollow rhombus star.c` - Hollow rhombus pattern
- `Hollow rhombus star 1.c` - Variation
- `Inclined star line.c` - Diagonal patterns

#### 4. **Array Operations**
- `Arrays 1.c` - Array basics
- `2D Arrays.c` - Two-dimensional arrays
- `2D Arrays 2.c` - Advanced 2D array operations
- `ARRAY CPP.cpp` - Array in C++
- `ARRAY OUTPUT.cpp` - Array output examples

#### 5. **Control Flow & Loops**
- `Loops.c` - Loop demonstrations
- `Nested Loops 1.c` through `Nested Loops 4.c` - Nested loop patterns
- `Consecutive numbers.cpp` - Working with sequences

#### 6. **Functions & Recursion**
- `Functions 1.c` - Function basics
- `Recursive Function 1.c` - Recursion introduction
- `Recursive Function 2.c` - Advanced recursion

#### 7. **Utility Programs**
- `Calulator.c` - Basic calculator (note: filename has typo, should be "Calculator")
- `Clock.c` - Time-related operations
- `Max btn numbers.C` - Finding maximum between numbers (note: 'btn' is abbreviated 'between')
- `Area.C` - Area calculations

#### 8. **Advanced Concepts**
- `null pointer.cpp` - Pointer concepts
- `pointers of variables.cpp` - Variable pointers
- `Sample code.c` - Miscellaneous examples

### C++ Programs

The `C++ PROGRAM LANGUAGE` directory contains object-oriented programming examples:

#### 1. **Class Implementations**
- **Circle Class**
  - `Class Circle.cpp` - Circle class with area and perimeter methods
  - Features: Encapsulation, getter/setter methods, calculation functions
  
- **Rectangle Class**
  - `Class Rectangle.cpp` - Rectangle operations using OOP
  - Features: Area and perimeter calculations, data encapsulation
  
- **Trigonometry Class**
  - `Class Trigonometry.cpp` - Trigonometric calculations in OOP style

#### 2. **Mathematical Programs**
- `Quadratic.cpp` - Quadratic equation solver
  - Handles real and complex roots
  - Discriminant-based solution selection
  
- `Consecutive numbers.cpp` - Number sequence operations
- `Leap year.cpp` - Leap year determination
- `Paycheck.cpp` - Payroll calculations

## 🚀 Getting Started

### Prerequisites

To compile and run these programs, you need:

1. **C/C++ Compiler** (one of the following):
   - **GCC/G++** (Linux/macOS):
     ```bash
     # Check if installed
     gcc --version
     g++ --version
     ```
   - **MinGW** (Windows):
     - Download from [MinGW website](http://www.mingw.org/)
   - **Visual Studio** (Windows):
     - Install Visual Studio with C++ development tools

2. **Text Editor or IDE** (optional but recommended):
   - Visual Studio Code
   - Code::Blocks
   - Dev-C++
   - CLion
   - Vim/Emacs

### Compilation

#### For C Programs:

**Using GCC (Linux/macOS/Windows with MinGW):**
```bash
# Compile a single C file
gcc "My Codes - C program/Fibonacci sequence.c" -o fibonacci

# Compile with optimization
gcc -O2 "My Codes - C program/GCD Function.c" -o gcd

# Compile with all warnings
gcc -Wall "My Codes - C program/Calulator.c" -o calculator
```

**Using Windows Command Prompt:**
```cmd
gcc "My Codes - C program\Fibonacci sequence.c" -o fibonacci.exe
```

#### For C++ Programs:

**Using G++:**
```bash
# Compile a C++ file
g++ "C++ PROGRAM LANGUAGE/Class Circle.cpp" -o circle

# Compile with C++11 standard
g++ -std=c++11 "C++ PROGRAM LANGUAGE/Quadratic.cpp" -o quadratic

# Compile with math library (if needed)
g++ "C++ PROGRAM LANGUAGE/Class Trigonometry.cpp" -o trig -lm
```

### Running Programs

After compilation, run the executable:

**Linux/macOS:**
```bash
./fibonacci
./circle
```

**Windows:**
```cmd
fibonacci.exe
circle.exe
```

**Example Workflow:**
```bash
# Navigate to repository
cd Sample-Practice-Codes

# Compile a C program
gcc "My Codes - C program/GCD Function.c" -o gcd_program

# Run the program
./gcd_program

# Input when prompted
# Enter two numbers = 48 18
# Output: GCD of 48 and 18 = 6
```

## 📖 Program Descriptions

### Featured Programs

#### 1. **GCD (Greatest Common Divisor)**
- **Purpose**: Find the largest number that divides both given numbers
- **Algorithms**: 
  - Iterative approach
  - Euclidean algorithm (most efficient)
  - Recursive method
- **Use Case**: Simplifying fractions, cryptography basics

#### 2. **Fibonacci Sequence**
- **Purpose**: Generate the famous Fibonacci sequence
- **Algorithm**: Each number is the sum of the two preceding ones
- **Applications**: Nature patterns, golden ratio, algorithm analysis

#### 3. **Class Circle (OOP)**
- **Purpose**: Demonstrate object-oriented programming
- **Features**:
  - Private data member (radius)
  - Public methods (setters, getters)
  - Calculation methods (area, perimeter)
  - Display functionality
- **Concepts**: Encapsulation, abstraction, class design

#### 4. **Quadratic Equation Solver**
- **Purpose**: Solve quadratic equations (ax² + bx + c = 0)
- **Features**:
  - Discriminant calculation
  - Real roots (when Δ > 0)
  - Equal roots (when Δ = 0)
  - Complex roots detection (when Δ < 0)
- **Mathematical Formula**: x = [-b ± √(b²-4ac)] / 2a

#### 5. **Pattern Printing Programs**
- **Purpose**: Practice nested loops and pattern logic
- **Patterns**:
  - Star triangles
  - Hollow rhombus
  - Inclined lines
- **Skills Developed**: Loop control, spatial reasoning, formatting

#### 6. **Recursive Functions**
- **Purpose**: Demonstrate recursion concept
- **Examples**: Factorial, GCD, Fibonacci
- **Key Concepts**: Base case, recursive case, call stack

## 🎓 Learning Objectives

By studying these programs, you will learn:

### Fundamental Concepts
- ✅ Variables, data types, and operators
- ✅ Input/output operations
- ✅ Conditional statements (if-else, switch)
- ✅ Loops (for, while, do-while)
- ✅ Functions and parameter passing
- ✅ Arrays (1D and 2D)
- ✅ Pointers and memory management

### Advanced Topics
- ✅ Recursion and recursive algorithms
- ✅ Object-Oriented Programming (C++)
- ✅ Classes and objects
- ✅ Encapsulation and data hiding
- ✅ Mathematical algorithm implementation
- ✅ Pattern recognition and generation

### Programming Best Practices
- ✅ Code organization
- ✅ Function modularity
- ✅ Meaningful variable naming
- ✅ Problem decomposition
- ✅ Algorithm efficiency considerations

## 🤝 Contributing

Contributions are welcome! If you'd like to add more practice programs or improve existing ones:

1. **Fork the repository**
2. **Create a new branch**
   ```bash
   git checkout -b feature/new-program
   ```
3. **Add your program** with appropriate comments
4. **Follow naming conventions**:
   - Use descriptive file names
   - Use `.c` extension for C programs
   - Use `.cpp` extension for C++ programs
5. **Test your code** thoroughly
6. **Commit your changes**
   ```bash
   git commit -m "Add: [Program Name] - [Brief Description]"
   ```
7. **Push to your branch**
   ```bash
   git push origin feature/new-program
   ```
8. **Open a Pull Request**

### Coding Standards
- Write clean, readable code
- Add comments explaining complex logic
- Use consistent indentation (spaces or tabs)
- Include sample input/output in comments
- Test all edge cases

## 👤 Author

**Omar Kasera (Cedric-Kasera)**

- GitHub: [@Cedric-Kasera](https://github.com/Cedric-Kasera)
- Repository: [Sample-Practice-Codes](https://github.com/Cedric-Kasera/Sample-Practice-Codes)

## 📄 License

This project is available for educational purposes. Feel free to use these programs for learning and practice.

---

### 📝 Notes

- **Executable Files**: The repository contains `.exe` files which are compiled binaries. You may want to recompile these programs on your system for best compatibility.
- **Platform Compatibility**: C programs are highly portable. C++ programs may require specific compiler flags for newer features.
- **Learning Path**: Start with basic programs (loops, functions) before moving to advanced topics (recursion, OOP).

### 🔗 Useful Resources

- [C Programming Documentation](https://en.cppreference.com/w/c)
- [C++ Programming Documentation](https://en.cppreference.com/w/cpp)
- [GCC Compiler Manual](https://gcc.gnu.org/onlinedocs/)
- [Learn C Programming](https://www.learn-c.org/)
- [Learn C++](https://www.learncpp.com/)

---

**Happy Coding! 🚀**

*Last Updated: December 2024*
