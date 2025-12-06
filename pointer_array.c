/**
 * pointer as one dimensionnal array
 * pointer as multidimensionnal array
*/

#include <stdio.h>

int main(){
    char array_a[] = {'a', '.', '\'', '\\'};
    char* p = array_a;

    puts("test 1\n");
    printf("%d\n", array_a);
    printf("%d\n", &array_a);
    printf("%d\n", &array_a[0]);

    //navigate with pointer syntax
    puts("test 2\n");
    printf("%d\n", *array_a+0); //array_a[0]
    printf("%c\n", *(array_a+1));
    printf("%c\n", *(array_a+2));
    printf("%c\n", *(array_a+3));

    //navigate with my own pointer
    puts("test 3\n");
    printf("%c\n", *p);
    printf("%c\n", *(p+1));
    printf("%c\n", *(p+2));
    printf("%c\n", *(p+3));

    //shift
    puts("test 3\n");
    p += 1;
    printf("%c\n", *p);

    //multidimensionnal array
    puts("test 4\n");
    char array_b[2][3] = {'a', '\'', '\\',
                          'b', '@', '#'};

    printf("%c\n", *(*array_b + 0)); // *( (*array + 0) + 0 )
    printf("%c\n", *(*array_b + 1)); // *( (*array + 1) + 0 )

    /**
     * {
     *  { {{}, {}}, {{}, {}} },
     *  { {{}, {}}, {{}, {}} },
     *  { {{}, {}}, {{}, {}} },
     * }
     *  
     *      * ( * (* (*array + 2) + 1) + 1) + 1)
     */
}