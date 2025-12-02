#include <stdio.h>

int main() {
    int int_number = 10;
    long int_number2 = 300L; // L is used to indicate a long integer
    long long int_number3 = 3045LL;

    int number = 10; // Default is an int
    int octal_form_number = 043; //digit go from 0 to 7
    int hexe_form_number = 0x5a; //digit go from 0 to 9 and a to f

    unsigned int u_int_number = 10U; // U indicates an unsigned integer
    unsigned long u_long_number = 300UL;

    float float_number = 23.4f;
    double double_number = 345.43;
    long double long_double_number = 678L;

    char char_var = '\033';

    printf("%c", char_var); 
}