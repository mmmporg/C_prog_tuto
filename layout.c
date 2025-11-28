#include <stdio.h>

int main(){
    /**
     * LAYOUT OF A C PROGRAM
     * 
     * declaration: type name            ex: int x; float y; char character;
     * assignation: name = value;     ex: x = 3; y = 4.5; character = '/';
     * 
     * mix declaration and assignition(initialization): type name = value=;    ex: int var1 = 2, var2 = 3.5;
     * 
     * function declaration: type name(type var1, type var2, ...);
     * function definition:
     *              type name(type var1, type var2, ...){
     *                  statement1;
     *                  statement2;
     *                  ...;
     * 
     *                  return value;
     *              }
     * 
     * function call: name(value1, value2, ...);
     */

     int a;
     int b;

    int c, d, e;

    a = 3;
    b = 6;
    c = 70;
    d = 30;
    e = 32;

    int f = 30;

    int g = 30, h = 11, i = 45;

    int j, k = 10, l, m, n = 20, o, p;

    printf("%d %d %d", c, g, j);
}