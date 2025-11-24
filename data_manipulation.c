#include <stdio.h>

int main() {
    /**
    Type of operation you can do on data in programming:
     * you can display a data
     * you can store a data
     * you can computes with 2 or more datas
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

    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));

    return 0;
}