// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
// NOTE: Use a fixed maximum size of 10 for array dimensions.
//       Declare arrays as int matrix[10][10].
//
// -----------------------------------------------------------------------------
// PART A — Transpose a Matrix
// -----------------------------------------------------------------------------
// - Read an M x N matrix from the user.
// - Compute and display its transpose (rows become columns, columns become rows).
//
// Example (2 x 3 input):
//
//   Original Matrix:      Transposed Matrix:
//   1  2  3               1  4
//   4  5  6               2  5
//                         3  6
//
// -----------------------------------------------------------------------------
// PART B — Add Two Matrices
// -----------------------------------------------------------------------------
// - Read two matrices of exactly the same size (M x N).
// - Compute their element-wise sum and display the result.
//
// -----------------------------------------------------------------------------
// PART C — Multiply Two Matrices
// -----------------------------------------------------------------------------
// - Read matrix A of size M x N and matrix B of size N x P.
//   (Number of COLUMNS in A must equal number of ROWS in B.)
// - Compute and display the matrix product A x B (result is M x P).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT FORMAT
// -----------------------------------------------------------------------------
// The user enters each row's values one at a time:
//
//   Enter number of rows: 2
//   Enter number of columns: 3
//   Enter element [0][0]: 1
//   Enter element [0][1]: 2
//   ...
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use nested loops for all operations (no external libraries).
// - Each operation must be in its own function (see scaffold below).
// - Display each matrix in a neat, aligned grid using setw().
// - Tip: Complete Part A first, then Parts B and C.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of array elements[cite: 2]
double calculateAverage(const int arr[], int size) {
    int sum = calculateSum(arr, size);
    return static_cast<double>(sum) / size;
}

// Function to find the maximum element in the array[cite: 2]
int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to find the minimum element in the array[cite: 2]
int findMin(const int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int count;

    // Prompt the user for the quantity of numbers[cite: 2]
    cout << "How many numbers? ";
    cin >> count;

    // Validate that N is a positive integer[cite: 2]
    if (count <= 0) {
        cout << "Error: Number of elements must be greater than 0." << endl;
        return 1;
    }

    // Allocate dynamic array for input numbers[cite: 2]
    int* numbers = new int[count];

    // Read input numbers from user[cite: 2]
    for (int i = 0; i < count; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << endl;
    cout << "Results:" << endl;
    cout << "Sum:     " << calculateSum(numbers, count) << endl;
    cout << "Average: " << calculateAverage(numbers, count) << endl;
    cout << "Maximum: " << findMax(numbers, count) << endl;
    cout << "Minimum: " << findMin(numbers, count) << endl;

    // Free memory
    delete[] numbers;

    return 0;
}
// =============================================================================

#include <iostream>
using namespace std;

int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of array elements[cite: 2]
double calculateAverage(const int arr[], int size) {
    int sum = calculateSum(arr, size);
    return static_cast<double>(sum) / size;
}

// Function to find the maximum element in the array[cite: 2]
int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to find the minimum element in the array[cite: 2]
int findMin(const int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int count;

    // Prompt the user for the quantity of numbers[cite: 2]
    cout << "How many numbers? ";
    cin >> count;

    // Validate that N is a positive integer[cite: 2]
    if (count <= 0) {
        cout << "Error: Number of elements must be greater than 0." << endl;
        return 1;
    }

    // Allocate dynamic array for input numbers[cite: 2]
    int* numbers = new int[count];

    // Read input numbers from user[cite: 2]
    for (int i = 0; i < count; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << endl;
    cout << "Results:" << endl;
    cout << "Sum:     " << calculateSum(numbers, count) << endl;
    cout << "Average: " << calculateAverage(numbers, count) << endl;
    cout << "Maximum: " << findMax(numbers, count) << endl;
    cout << "Minimum: " << findMin(numbers, count) << endl;

    // Free memory
    delete[] numbers;

    return 0;
}
// =============================================================================

#include <iostream>
using namespace std;



