#include <stdio.h>

//a simple function that adds two integers
int add(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int x = 10;
    int y = 20;
    int sum = 0;

    printf("Before function call.\n");
    sum = add(x, y); // Function call happens here
    printf("After function call. The sum is : %d\n", sum);

    return 0;
}
