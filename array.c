/**
 * one dimensionnal array
 *      layout decleration: type name[]; //it is a aggregate variable
 * two dimanesionnal array
 *      layout declaration: type name[][];
 */

#include <stdio.h>

int main(){
    int arr[4];
    arr[0] = 99;
    arr[1] = 34;
    arr[2] = 35;
    arr[4] = 89;

    printf("first test: %d\n", arr[0]);

    for(int i = 0; i < 4; ++i){
        arr[i] = i * 2;
    }

    for(int i = 0; i < 4; ++i){
        printf("second test: %d\n", arr[i]);
    }

    int arr2[10] = {5, 9, 3, 5};

    for(int i = 0; i < 10; ++i){
        printf("third test: %d\n", arr2[i]);
    }

    int arr3[10] = {arr3[4] = 89, 43, 55, arr3[8] = 99, arr3[5] = 35};

    for(int i = 0; i < 10; ++i){
        printf("fourth test: %d\n", arr3[i]);
    }

    int arr4[2][3] = {
        1, 2, 3,
        5, 6, 7};

    printf("fifth test: %d\n", arr4[1][2]);

    printf("%d\n", sizeof(arr2)/sizeof(int));
}