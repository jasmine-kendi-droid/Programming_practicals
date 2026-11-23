// ACTIVITY 1: SUM OF FIRST N NATURAL NUMBERS
// Learning Outcome: Apply a for loop to iterate over a range
// ============================================================

// Include the input/output library so we can use cin and cout

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive number(N): ";
    cin >> n;
  
    // Start a for loop with three parts separated by semicolons:
// Part 1: int i = 1; -> Initialisation: start counting from 1
// Part 2: i <= n; -> Condition: keep looping while i is less than or equal to n
// Part 3: i++ -> Increment: increase i by 1 after each iteration
    for (int i = 1; i <= n; i++) {
        sum += i; // Add the current value of i to sum
    }
  
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}