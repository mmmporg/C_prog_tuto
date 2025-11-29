/**
 * selection statements: if and switch
 *      if (expression) statement;
 * iteration statements: while, do, for (looping)
 * jump statements: break, continue, goto, return
 * 
 * relationnal operator: <, >, <=, >=
 * equality operator: ==, !=
 * logical operator: !, &&, ||
 * 
 * conditional expression: expr1 ? expr2 : expr3
 * 
 * switch(expression){
 *     case constant_expression1: statements;
 *                                
 *     case constant_expression2: statements;
 *     ...
 *     default: statements;
 * }
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(){
    //relationnal operator
    int a = 1, b = 10;
    printf("first test: %d\n", a != 9);

    //equality operator
    printf("second test: %d\n", a != 30);

    //logical operator
    printf("third test: %d\n", 3 > 1 && 3 > a); // AND operator
    printf("third test: %d\n", 40 > a && ++a == 30); // AND operator
    printf("fourth test: %d\n", 3 > a || a == 30); // OR operator

    //if statement
    //if(a < 10) printf("ok\n");

    //0 ≤ i < n
    int i = 2, n = 3;
    //if(0 <= i < n) printf("ok\n"); //wrong way
    if(0 <= i)
        if(i < n) printf("ok\n"); //correct way

    //else clause
    if(a > 11) {
        printf("else test: yes my var is greater than 11\n"); 
    }
    else {
        if(a > i){
            printf("else test: no my var is smaller 11 but greater than variable i\n");
        }
        else{
            printf("else test: my variable is greater than nothing\n");
        }
    }

    //cascade else-if
    if(b > 11) {
        printf("cascade else-if test: yes my var is greater than 11\n"); 
    }
    else if (b > i){
        printf("cascade else-if test: no my var is smaller 11 but greater than variable i\n");
    }
    else{
        printf("cascade else-if test: my variable is greater than nothing\n");
    }

    //conditionnal expression
    _Bool var;
    b > 5 ? printf("b is bigger than 5\n") : printf("b is smaller than 5\n");
    printf("is my variable b greater than 5: %d\n", b > 5 ? TRUE : FALSE);

    printf("%d\n", var);

    printf("end of the program\n");

    //cascade if-else like swicth
    int time = 1;

    if(time == 1){
        printf("cascade if-else: good morning\n");
    }
    else if(time == 2){
        printf("cascade if-else: good evening\n");
    }
    else if(time == 3){
        printf("cascade if-else: good afternoon\n");
    }
    else{
        printf("cascade if-else: good night\n");
    }

    //switch statement
    switch (time){
        case 1: printf("swicth: good morning\n");
                break;
        case 2: printf("swicth: good evening\n");
                break;
        case 3: printf("swicth: good afternoon\n");
                break;
        default: printf("swicth: good night\n");
    }

    //switch with character
    char grade = 'x';

    switch(grade){
        case 'A': printf("Excellent\n");
                  break;
        case 'B': printf("Very good\n");
                  break;
        case 'C': printf("Good\n");
        case 'x': printf("Average\n");
                  break;
        case 'D': printf("Pass\n");
                  break;
        case 'F': printf("Fail\n");
                  break;
        default: printf("Invalid grade\n");
    }

    //switch several case
    switch(grade){
        case 'A': printf("Excellent\n");
                  break;
        case 'B': printf("Very good\n");
                  break;
        case 'C': case 'x': case 'z':
                printf("Average\n");
                break;
        case 'D': printf("Pass\n");
                  break;
        case 'F': printf("Fail\n");
                  break;
        default: printf("Invalid grade\n");
    }
}