/**
 * integers types: standard signed integer, standard unsigned integer
 * floating point types: standard float, standard double, extended precision long double, float _Complex, double _Complex, long double _Complex
 * character types: standard char, signed char, unsigned char
 * 
 * type conversion: arithmetic conversion, conversion during assignment, implicit conversion, explicit conversion (type casting)
 */

#include <stdio.h>

int main(){
    //integer constant
    int a = 10;          // decimal constant
    int b = 012;        // octal constant
    int c = 0x12;       // hexadecimal constant
    int d = 0b1010;     // binary constant (C17 extension)

    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);         
    printf("%x\n", d);

    long int e = 1234567890L;        // long integer constant
    unsigned int f = 3000000000U;    // unsigned integer constant
    long long int g = 123456789012345LL; // long long integer constant
    unsigned long int h = 4000000000UL; // unsigned long integer constant

    float number1 = 12.4562642f;          // float constant
    double number2 = 12345.678901234567890; // double constant
    long double s = 123456.789012345678901234567890e3; // long double constant

    char ch = 'a';
    char ch2 = 97; // ASCII value of 'a'
    char ch3 = '\'';

    putchar(ch);
    //ch = getchar();

    int result = a + number1;

    int x = number2; // implicit conversion (with assignment) from double to int (truncation)

    int y = (int)c + a; // explicit conversion (type casting) from long double to int (truncation)

    typedef int money;
    money salary = 5000;

    printf("%d\n", sizeof(long int));
}