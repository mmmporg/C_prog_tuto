#include <stdio.h>

int main() {
    /**
     * FORMATTED INPUT AND OUTPUT IN C
     * 
     * prototype of printf() function: printf("format string", data1, data2, ...);
     * prototype of scanf() function: scanf("format string", &var1, &var2, ...);
     */

     // printf()            1.2 x 10^2 = 120
     float var = 10.2;
     printf("I have \t years old\n", var);

     // scanf()
    //  scanf("%f", &var);
    //  int var2 = 5;
    //  printf("%d\n", &var);
    //  printf("%d\n", &var2);

     //scanf() another example
     int x, y;
     scanf("%d%d", &x, &y);

    printf("The values you entered are: %d and %d\n", x, y);
}