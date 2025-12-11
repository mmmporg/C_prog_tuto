/**
 * macro definitions directive: #define, #undef
 *      layout: #define MACRO_NAME token_sequence
 *              #undef MACRO_NAME
 *              #define MACRO_NAME(parameters) token_sequence
 * file inclusion directive: #include, #import
 * conditional directive(compilation): #if, #ifdef, #ifndef, #else, #elif,
 * 
 * remaining directives: #error, #pragma, #line
 */


#include <stdio.h>
#define PI 3.14
#undef PI
#define PI 3.14159
#define DOUBLE_PI (2 * PI)
#define BEGIN {
#define END }
#define PRINT_INT(x) printf("The integer Value of " #x " is  %d\n", x)
#define ADD(x, y) ((x) + (y))
#define MK_ID(x) x##employee
#define MK_ID(x,y) x##y

#if defined(PI)
    #define PI_DEFINED
#endif

#ifdef ARCH == 64
    #define ARCHITECTURE "64-bit"
#elseif ARCH == 32
    #define ARCHITECTURE "32-bit"
#elseif ARCH == amd64
    #define ARCHITECTURE "amd64"
#endif



#define PRINT(x) \
printf("Value: %d\n", x);\
printf("Value of MK_ID(var, 2): %d\n", MK_ID(var, 2));

#define print(x) \
if(sizeof(x) == sizeof(int)) { \
    printf("%d\n", (int)x); \
} else if(sizeof(x) == sizeof(float)) { \
    printf("%f\n", (float)x); \
} else if(sizeof(x) == sizeof(double)) { \
    printf("%lf\n", (double)x); \
} else if(sizeof(x) == sizeof(char)) { \
    printf("%c\n", (char)x); \
} else { \
    printf("Unknown type\n"); \
}

int main(int argc, char* argv[]) BEGIN
    const int const_radius = 3;

    printf("test1\n");
    printf("Value of PI: %f\n", PI);
    printf("Value of DOUBLE_PI: %f\n", DOUBLE_PI);

    printf("test2\n");
    PRINT_INT(const_radius);

    printf("test3\n");
    printf("The sum of 2 and 3 is: %d\n", ADD(2, 3));

    printf("test4\n");
    //int MK_ID(alex) = 1001; // becomes int employee = 1001; this macro called is not still valid
    int MK_ID(var, 1) = 11; // becomes int var1 = 10;
    int MK_ID(var, 2) = 12; // becomes int var2 = 10;
    int MK_ID(var, 3) = 13; // becomes int var3 = 10;

    printf("test5\n");
    PRINT(MK_ID(var, 1));

    printf("test6\n");
    print(42);
    print(3.14);
    print(3.14f);
    print('A');
    return 0;
END