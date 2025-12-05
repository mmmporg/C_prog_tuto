/**
 * 
 * 
 * return_type function_name(parameter_list) {
 *      // function body
 *      return value;
 * }
 */

#include <stdio.h>
#include <stdlib.h>

int average(int a, int b);
void print_average(int a, int b);
int sum_array(int arr[], int size);

int main(void) {
    int a = 3;
    int b = 6;
    (void) average(a, b); //the returned value is discarded
    //int c = average(a, b);
    printf("average of %d and %d is %d\n", a, b, average(a, b));
    int number_of_character = printf("try it\n");
    printf("number of character printed is %d\n", number_of_character);

    print_average(a, b);
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("sum of array is %d\n", sum_array(arr, size));

    return 0;
}

int average(int a, int b) {
    return (a + b) / 2;
    // return 12.45; // implicit conversion from double to int
}

void print_average(int a, int b) {
    // return(1); // terminates the program immediately
    printf("average of %d and %d is %d\n", a, b, average(a, b));
}

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}