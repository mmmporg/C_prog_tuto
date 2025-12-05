/**
*organizing a C program
#include [header_file]
#define [constant or another MACRO]

type definition
global variable defition
declaration of all functions (your own functions)
define main() function
declaration of all local variables
define of all functions (your own functions)
 */

#include <stdio.h>

int var = 0; //global variable

int func_a(){
	static int a = 0; //permanent content inside this variable
	++a;
}

int func_b(int b){
	return ++b; //argument looks like local variable
}

int main(){
	printf("%d\n", func_a());
	printf("%d\n", func_a());
	printf("%d\n", func_a());
	printf("%d\n", func_a());
	
	printf("%d\n", func_b(2));
	printf("%d\n", func_b(3));
	printf("%d\n", func_b(5));
	printf("%d\n", func_b(7));
	
	//block of code
	{
		int x = 0;
		printf("%d\n", x); //x has this small scope
	} 
	
	//printf("%d\n", x); //x is unaccessible here
}
