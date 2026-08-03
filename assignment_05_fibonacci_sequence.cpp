// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 5
// =============================================================================
//
// TASK: Fibonacci Sequence Generator
//
// The Fibonacci sequence is a series of numbers where each number is the sum
// of the two numbers before it:
//
//   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//
// Write a C++ program with TWO parts, each implemented as a function.
//
// -----------------------------------------------------------------------------
// PART A — Print the First N Terms
// -----------------------------------------------------------------------------
// - Ask the user how many terms (N) to display.
// - Print the first N numbers of the Fibonacci sequence on one line.
//
// Example:
//   How many terms? 7
//   Fibonacci sequence: 0 1 1 2 3 5 8
//
// -----------------------------------------------------------------------------
// PART B — Check if a Number Belongs to the Sequence
// -----------------------------------------------------------------------------
// - Ask the user to enter a number.
// - Determine whether that number is a Fibonacci number.
// - Print an appropriate message.
//
// Example:
//   Enter a number to check: 13
//   13 is a Fibonacci number.
//
//   Enter a number to check: 20
//   20 is NOT a Fibonacci number.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use a loop (not recursion) to generate the sequence in both parts.
// - N must be a positive integer. If it is not, print an error message.
// - Each part must be implemented in its own function (see scaffold below).
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
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



