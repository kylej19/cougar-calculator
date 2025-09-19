# Cougar Calculator 🧮

A collaborative scientific calculator project built in C++ by our software development club.

## 📋 Project Overview

This is our first group project where we're building a scientific calculator from scratch using C++. We're learning version control with Git/GitHub while developing a functional calculator that can handle basic arithmetic and scientific operations.

## 🎯 Project Goals

- Learn collaborative software development using Git/GitHub
- Build a working scientific calculator in C++
- Practice modular programming and clean code principles
- Gain experience with cross-platform development (Windows/macOS)

## 🏗️ How a Calculator Works

A calculator processes mathematical expressions through several key steps:

1. **Input Parsing**: Convert user input (string) into tokens (numbers, operators, functions)
2. **Expression Validation**: Check if the expression is mathematically valid
3. **Evaluation**: Process the expression following order of operations (PEMDAS)
4. **Output Formatting**: Display the result in a user-friendly format

### Core Components

```
User Input → Parser → Validator → Evaluator → Formatter → Display
```

## 📦 Module Structure

Our calculator will be organized into the following modules:

### 1. **Input Handler Module** (`input.h/cpp`)
- Read user input from command line or GUI
- Handle special commands (quit, clear, help)
- Basic input sanitization

### 2. **Parser Module** (`parser.h/cpp`)
- Tokenize input strings into numbers, operators, and functions
- Convert infix notation to postfix (Reverse Polish Notation)
- Handle parentheses and function calls

### 3. **Validator Module** (`validator.h/cpp`)
- Check for syntax errors (mismatched parentheses, invalid operators)
- Validate function arguments
- Ensure mathematical expressions are well-formed

### 4. **Calculator Engine Module** (`calculator.h/cpp`)
- **Basic Operations**: `+`, `-`, `*`, `/`, `%`
- **Scientific Functions**: `sin`, `cos`, `tan`, `log`, `ln`, `sqrt`, `pow`
- **Advanced Operations**: `factorial`, `absolute value`
- **Constants**: `π`, `e`

### 5. **Expression Evaluator Module** (`evaluator.h/cpp`)
- Evaluate postfix expressions
- Handle operator precedence
- Manage the calculation stack

### 6. **Utility Module** (`utils.h/cpp`)
- Helper functions (string manipulation, number conversion)
- Error handling and custom exceptions
- Mathematical constants and utilities

### 7. **Main Program** (`main.cpp`)
- Program entry point
- User interface loop
- Coordinate between modules

## 🛣️ Development Roadmap

### Phase 1: Foundation (Week 1-2)
**Goal**: Get basic arithmetic working

**Priority Tasks**:
1. Set up project structure and build system
2. Implement basic input/output
3. Create simple parser for numbers and basic operators (`+`, `-`, `*`, `/`)
4. Build basic evaluator for simple expressions like "2 + 3"
5. Add basic error handling

**Deliverable**: Calculator that can handle expressions like `5 + 3 * 2`

### Phase 2: Enhanced Parsing (Week 3-4)
**Goal**: Handle complex expressions with parentheses

**Tasks**:
1. Implement parentheses support in parser
2. Add order of operations (PEMDAS)
3. Improve error messages
4. Add support for decimal numbers
5. Create comprehensive test cases

**Deliverable**: Calculator that can handle `(5 + 3) * 2.5`

### Phase 3: Scientific Functions (Week 5-6)
**Goal**: Add scientific calculator capabilities

**Tasks**:
1. Implement trigonometric functions (`sin`, `cos`, `tan`)
2. Add logarithmic functions (`log`, `ln`)
3. Implement power and square root functions
4. Add mathematical constants (`π`, `e`)
5. Create function parser and validator

**Deliverable**: Calculator with scientific functions like `sin(π/2) + log(10)`

### Phase 4: Polish and Testing (Week 7-8)
**Goal**: Robust, user-friendly calculator

**Tasks**:
1. Comprehensive error handling
2. User-friendly interface improvements
3. Extensive testing across platforms
4. Documentation and code cleanup
5. Performance optimization

**Deliverable**: Production-ready scientific calculator

## 🔧 Setup Instructions

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- Git
- CLion IDE (recommended) or any C++ IDE
- CMake (for build management)

### Getting Started

1. **Clone the repository**:
   ```bash
   git clone https://github.com/kylej19/cougar-claculator.git
   cd cougar-claculator
   ```

2. **Set up your development environment**:

   **For Windows users**:
    - Install MinGW-w64 or use Visual Studio
    - Make sure Git is properly configured
    - CLion should auto-detect your compiler

   **For macOS users**:
    - Install Xcode command line tools: `xcode-select --install`
    - Ensure Git is configured with your GitHub credentials

3. **Build the project**:
   ```bash
   mkdir build
   cd build
   cmake ..
   make  # or build through your IDE
   ```

### Git Workflow for Beginners

1. **Before starting work**:
   ```bash
   git pull origin main  # Get latest changes
   git checkout -b your-feature-branch
   ```

2. **After making changes**:
   ```bash
   git add .
   git commit -m "Brief description of changes"
   git push origin your-feature-branch
   ```

3. **Create a Pull Request** on GitHub for code review

## 🐛 Common Setup Issues

### Windows Issues
- **Compiler not found**: Install MinGW-w64 or Visual Studio Build Tools
- **Git not recognized**: Add Git to your system PATH
- **CLion can't find compiler**: Go to File → Settings → Build → Toolchains

### macOS Issues
- **No compiler**: Run `xcode-select --install`
- **Permission denied**: Check file permissions and Git credentials
- **CMake issues**: Install via Homebrew: `brew install cmake`

### General Git Issues
- **Merge conflicts**: Don't panic! Ask for help and we'll resolve together
- **Forgot to pull**: Always `git pull origin main` before starting new work
- **Accidentally committed to main**: We can fix this - ask for help

## 📁 Project Structure

```
cougar-claculator/
├── src/
│   ├── main.cpp
│   ├── calculator.h/cpp
│   ├── parser.h/cpp
│   ├── evaluator.h/cpp
│   ├── input.h/cpp
│   ├── validator.h/cpp
│   └── utils.h/cpp
├── tests/
│   └── test_calculator.cpp
├── docs/
│   └── API_documentation.md
├── CMakeLists.txt
├── README.md
└── .gitignore
```

## 🧪 Testing

We'll implement tests for each module to ensure reliability:
- Unit tests for individual functions
- Integration tests for complete expressions
- Cross-platform compatibility tests

## 🤝 Contributing

1. Pick a task from the current phase
2. Create a feature branch
3. Make your changes in small, focused commits
4. Test your changes thoroughly
5. Submit a pull request for review
6. Help review others' code

## 📞 Getting Help

- **Stuck on setup?** Ask in our club Discord/Slack
- **Git problems?** Don't force-push! Ask for help
- **Code questions?** Create an issue or ask during club meetings
- **Build errors?** Share your error messages with the group

## 📚 Learning Resources

- [C++ Reference](https://en.cppreference.com/)
- [Git Tutorial](https://learngitbranching.js.org/)
- [CMake Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/)
- [Mathematical Expression Parsing](https://en.wikipedia.org/wiki/Shunting_yard_algorithm)

---

**Remember**: This is a learning project! Don't worry about making mistakes - that's how we learn. Ask questions, help your teammates, and let's build something awesome together! 🚀