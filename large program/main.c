#include <stdio.h> //#include "/usr/include/stdio.h"
#include "calculus.h"
#include "3d/triangle.h"
//#include "../expression.c" //here it is just for the example (we just have to include header files)

int main(int argc, char *argv[]) {
    int x = 2;
    int y = 3;
    int result = add(x, y);
    printf("result = %d\n", result);

    return 0;
}