#include <stdio.h>

// In C, we use POINTERS to modify the original variables 
// The * means "pointer to an integer" 
void swapByPointer(int *a, int *b) { 
    // Dereference the pointer to get the value 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
 
int main() { 
    int x = 10, y = 20; 
     
    // Pass the ADDRESS of x and y using & operator 
    swapByPointer(&x, &y); 
     
    // Now x and y are swapped 
    printf("x = %d, y = %d\n", x, y); 
    return 0; 
}