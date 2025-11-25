#include <stdio.h>
#define PI 3.14

int main() {
    /**
    Type of operation you can do on data in programming:
     * you can display a data
     * you can store a data
     * you can computes with 2 or more datas
     * 
     * you can read data from user input
     * you can define constant
     * you cannot use keywords like identifier
     */

    // display data
    printf("%f\n", 3.14);
    printf("%d\n", 42);
    printf("%c\n", 'm');

    //store data
    int number1 = 3;
    float number2 = 3.2;
    char character1 = 'x';
    char character2 = '@';

    //compute 2 datas
    int x = 2 + 3;
    printf("%d\n", 5 - 3);
    printf("%d\n", x);

    //mix of operations
    int number3 = number1 + x;
    printf("%d\n", number3);

    printf("%ld\n", sizeof(short));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(float));
    printf("%ld\n", sizeof(char));

    //read data from user
    int var;
    printf("Enter a number: ");
    scanf("%d", &var);
    printf("The value that I put is: %d\n", var);

    //define a constant
    const int var2 = 3;
    printf("The value of the constant is: %d\n", var2);
    printf("The constant define at the beginning is: %f\n", PI);

    //you cannot do it
    //int return = 0;
    
    return 0;
}