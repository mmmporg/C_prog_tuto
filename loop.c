/**
 * while statement: 
 *      layout: while (expression) statements;
 * do statement:
 *      layout: do statements while(expression);
 * for statement:
 *     layout: for(initialization; expression; step) statements;
 * 
 * keyword:
 *      break: jumps out of a loop
 *      continue: skips the rest of a loop iteration
 *      goto: jumps to any statement inside the function
 *          layout: goto label;
 *      return: jumps out of the function
 */ 

#include <stdio.h>

int main(){
    //while statement
    int a = 0;
    while (a < 10) {
        printf("that is the %dth time\n", a);
        a+=1; //a = a + 1; //a++;
    }

    //do statement
    int b = 0;
    do{
        printf("this is the do statement: %d\n", b);
        b++;
    } while(b < 5);

    //for statement
    int i;
    for(i = 0; i < 6; i+=2) printf("that is the for loop: %d\n", i);

    //while like for loop
    int j = 0;
    while(j < 6){
        printf("this is a for-like while statement: %d\n", j);  // 添加格式化参数和换行符
        j++;
    }

    //for with ommiting expressions
    for(int k = 0; k < 3;) {
        printf("ommit right expression\n");
        k++;
    }

    //for with ommiting expressions
    int l = 0;
    for(; l < 3;) {
        printf("ommit left and right expression\n");
        l++;
    }

    //for with ommiting every expressions
    //for(;;){} //that is the for infinite loop
    // while(1){} //that is the while infinite loop
    int m = 0;
    for(;;){
        if(m >= 3){
            break;
        }
        printf("ommit left, right and middle expression\n");
        m++;
    }

    //for with comma operator
    for(int n = 0, o = 0; n < 3 && o < 3; n++, o++){
        printf("n: %d, o: %d\n", n, o);
    }

    //break statement
    for(int p = 0; p < 5; p++){
        if(p == 3){
            break;
        }
        printf("p: %d\n", p);
    }

    //continue statement
    for(int q = 0; q < 5; q++){
        if(q == 3){
            continue;
        }
        printf("q: %d\n", q);
    }

    //goto statement
    for(int r = 0; r < 5; r++){
        if(r == 3){
            goto end;
        }
        printf("r: %d\n", r);
    }
    end: printf("end of the program\n");

    //null statement
    while(scanf("%d", &a) && a != 0) ;
}