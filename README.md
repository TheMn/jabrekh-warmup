# Matrix Multiplication

This repository provides a simple C++ implementation of matrix multiplication.

## Description

The `mult.cpp` file contains a function `mult` that takes two matrices (represented as `vector<vector<int>>`) and returns their product. The implementation includes a `main` function that demonstrates how to use the `mult` function with sample matrices.

## Getting Started

### Prerequisites

You need a C++ compiler to run this code. Most systems have `g++` pre-installed.

### Compiling the Code

To compile the code, navigate to the repository's root directory and run the following command:

```bash
g++ -o mult mult.cpp
```

### Running the Program

After compiling, you can run the program using this command:

```bash
./mult
```

You should see the following output, which is the result of multiplying the sample matrices in the `main` function:

```
1
4
```

## About the Code

The core logic is in the `mult` function:

```cpp
Matrix mult(Matrix a, Matrix b);
```

- **Parameters**: It takes two matrices, `a` and `b`, as input.
- **Returns**: It returns a new matrix that is the product of `a` and `b`.

The `main` function initializes two matrices and then prints the result of their multiplication to the console.
