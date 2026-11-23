#include <iostream>
#include<iomanip>
using namespace std;

int main() { 
     
    // Display a title for the multiplication table 
    cout << "========================================" << endl; 
    cout << "     MULTIPLICATION TABLE (1 to 10)"     << endl; 
    cout << "========================================" << endl; 
    cout << endl; 
     
    // 1\. HEADER ROW: Print column numbers 1 to 10 
    for (int j = 1; j <= 10; j++) { 
        cout << setw(5) << j; 
    } 
    cout << endl;
    // 2\. SEPARATOR LINE: 50 dashes (10 columns \* 5 spaces width) 
    for (int k = 0; k < 50; k++) { 
        cout << "-";
     } 
     cout << endl;
    // OUTER LOOP: Controls the rows (multiplicand 1 to 10) 
    // Part 1: int i = 1;   -> Start with row 1 
    // Part 2: i <= 10;     -> Continue until row 10 
    // Part 3: i++          -> Move to the next row 
    for (int i = 1; i <= 10; i++) { 
         
        // INNER LOOP: Controls the columns (multiplier 1 to 10) 
        // This loop runs completely for EACH iteration of the outer loop 
        // Part 1: int j = 1;   -> Start with column 1 
        // Part 2: j <= 10;     -> Continue until column 10 
        // Part 3: j++          -> Move to the next column 
        for (int j = 1; j <= 10; j++) { 
             
            // Calculate the product of the current row and column 
            int product = i * j; 
 
             
            // Display the product with a field width of 5 characters 
            // setw(5) ensures each number takes up 5 spaces for alignment 
            cout << setw(5) << product; 
             
        } // End of inner loop - all columns for this row are printed 
         
        // After the inner loop finishes, move to the next line 
        // This starts a new row for the next value of i 
        cout << endl; 
         
    
    } // End of outer loop - all rows are printed 
     
    // Display a closing line 
    cout << "========================================" << endl; 
     
    // Return 0 to signal successful completion 
    return 0; 
}
