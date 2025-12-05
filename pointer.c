/**
 * pointer variable:
 *      layout: type* name_of_pointer;
 *      indirection operator: *
 *          ex: *p //where p is a pointer variable
 *      address operator: &
 *          ex: &var //where var is a normal variable
 */

#include <stdio.h>

int* func_a(int* arg){
    //arg *= 2; //arg = arg * 2, that is the case of pass by value
    int var = 3; //local variable
    *arg *= 2; //dereference the pointer to change the value at that address
    return &var;
}

int main(){
    int a = 0b100000001; //257
    char* p = NULL; //pay attention to the type of pointer

    p = &a;
    printf("%d \n", *p);
    printf("%d \n", a);

    int b = 5;
    printf("%d \n", b);

    //change the value of b using pointer
    int* p2 = &b;
    *p2 = 10;
    printf("%d \n", b);

    int p3 = NULL;
    //*p3 = 10; //undefined behavior
    printf("%d \n", p3);

    //using pointer to take input from user
    int c = 0;
    int* p4 = &c;

    printf("Enter an integer: ");
    scanf("%d", p4);
    printf("%d \n", c);

    //pointer as return value
    int x = 6;
    func_a(&x);
    printf("%d \n", x);
}