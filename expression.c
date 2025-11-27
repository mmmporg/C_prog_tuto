#include <stdio.h>

int main(){
    /**
     * arithmetic operators: 
     *      unary operators: +, -
     *      binary operators: +, -, *, /, %
     * 
     * relational operators: ==, !=, >, <, >=, <=
     * logical operators: &&, ||, !
     * 
     *highest precedence: + (unary), - (unary)
     *                      *, /, %
     *                     +, -,
     *                  relational operators
     *               logical AND (&&)
     *            logical OR (||)
     *              lowest precedence: logical NOT (!)
     */

    //arithmetic operators: uniry operators
    int x = 10;
    int a = +10;
    int b = -5;

    //arithmetic operators: binary operators
    int sum = x + a;          // addition
    int difference = x - b;   // subtraction
    int product = a * b;      // multiplication
    int quotient = x / a;     // division
    int remainder = x % 3;    // modulus

    printf("%d\n", remainder);

    //precedence example
    int var;
    int result;// multiplication has higher precedence than addition
    // int result = 10 + (5 * 2);

    printf("%d\n", var = result = 10 + 5 * 2);

    //implicit type conversion
    int intVar = 5;
    float floatVar = 2.5;
    int varResult = floatVar; // float to int conversion (that is the implicit conversion)
    
    //lvalue (left value)
    int number = 10; // 'number' is an lvalue

    //coumpound assignment operators
    int num = a = b = 10;

    //increment and decrement operators
    int i = 5;
    i++; // increment by 1
    printf("actual value of i: %d\n", i);

    printf("i is incremented for the next instruction: %d\n", i++); // post-increment
    printf("actual value of i: %d\n", i);

    printf("i has incremented directly at this instruction: %d\n", ++i); // pre-increment

    printf("i has decremented for the next instruction: %d\n", i--); // post-decrement
    printf("actual value of i: %d\n", i);

    /**WARNING: Avoid using complex expressions with side effects like the one below
     * c = (b = a +2) - (a = 1);
     * j = i + i++; // this is not correct because it has two side effects
     */
}