#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // break line using escape sequence
    printf("test1\n");
    printf("%s\n", "\
\
I am Alex, welcome to C programming!\n\
I am a developper.\n\
I can build applications in C.\n\
\
\n");

    // null character (terminator character) in string
    printf("test2\n");
    char str2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str3[] = "hello";
    printf("%d\n", sizeof(str2));
    printf("%d\n", sizeof(str3));

    //string variable
    printf("test3\n");
    char str_new[]= "hello";
    char* p_str = str_new;
    printf("%s\n", str_new);

    // read string from user
    // printf("test4\n");
    // char str_user[100] = {0};
    // printf("Enter your name: ");
    // scanf("%s", str_user);
    // printf("Your name is: %s\n", str_user);

    // char* p_str_user = NULL;
    // printf("Enter your name: ");
    // scanf("%ms", &p_str_user);
    // printf("Your name is: %s\n", p_str_user);

    // string lybrary functions
    printf("test5\n");
    char* mystr = "Hello, World!";
    char* mystr2 = "Hello, C Programming!";
    printf("Length of mystr: %d\n", strlen(mystr));
    char* str_result = strcat(mystr, mystr2);
    printf("the concatenated string is: %s\n", str_result);

    //array of string
    char* str_array[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    char** p_str_array = {
        "january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december"
    };
}