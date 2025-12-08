#include <stdio.h>
#include <string.h>

/**
 * argc: number of argument:    ./test argv1 argv2 argv3 
 * argv: array of argument:     [0] = ./test, [1] = argv1, [2] = argv2, [3] = argv3
 * */

int main(int argc, char* argv[]) {
    for(int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }

    printf("----\n");

    for(char** ptr = argv; *ptr != NULL; *ptr++){
        printf("%s\n", *ptr);
    }
}