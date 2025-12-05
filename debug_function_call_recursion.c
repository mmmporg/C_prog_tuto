#include <stdio.h>

// Recursive function to calculate the factorial of a number: N! (N factorial)
//Formula: n! = n * (n-1)! with the base case 0! = 1 and 1! = 1
long int factorial(int n) {
    // --- BASE CASE (Stop condition) ---
    if (n >= 1) {
        printf("Call of function factorial(%d) : %d * factorial(%d-1)\n", n, n, n);
        
        // --- RECURSIVE CALL --- function calls itself until base case is reached
        return n * factorial(n - 1); 
    } 
    // --- RETURN BASE CASE ---
    else {
        printf("Call of function factorial(%d) : n >= 1. Base case reached. Return 1.\n", n);
        return 1;
    }
}

int main() {
    int number = 4;
    long int result = 0;

    printf("--- Begin calculation of the factorial of %d ---\n", number);
    result = factorial(number);
    printf("--- End of calculation ---\n");

    printf("\nThe factorial of %d is %ld.\n", number, result);
    return 0;
}
