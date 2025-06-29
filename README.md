# 📝 C++ Homework Submission Repository

Welcome to the **C++ Homework Submission Repository**!  
This repository is designed for students to submit their homework solutions using Pull Requests. Each submission is automatically checked for formatting and memory safety.

## 📂 Repository Structure

Each student must submit their homework by creating **separate directory** inside their PR. Each directory may represent several tasks and contain the relevant C++ source files.

Example directory structure in a PR:
```
└── student_username/
    ├── task1/
    │   ...
    ├── task2/
    │   ...
```

## 🚀 How to Submit

1. **Fork** this repository.
2. Create a new branch from `main`.
3. Add your solution files in appropriately named directories.
4. Ensure your code:
   - Compiles without errors.
   - Passes `clang-format-18` with specified format file in root directory.
   - Passes `valgrind --leak-check=full`.
5. **Commit** and **push** your changes.
6. Create a **Pull Request** to the `main` branch.

## ✅ CI Workflows

Each PR will automatically trigger the following checks:

- **Valgrind Check**  
  Ensures your program does not have memory leaks or invalid memory usage.

- **Clang-Format Check**  
  Verifies your code is properly formatted using the `clang-format`.

If either check fails, your PR will not be approved until the issues are resolved.

## 🛠️ Requirements

- Your code must compile using a standard C++ compiler (e.g., `g++`).
- Use only standard libraries unless specified otherwise.
- Format your code using `clang-format`.
