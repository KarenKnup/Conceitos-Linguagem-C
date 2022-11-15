//VARIABLE SCOPE - GLOBAL

#include <stdio.h>

/*
  Variable scope refers to the visibility of variables within a program.
Variables declared in a function are local to that block of code and cannot be referred to outside the function.
Variables declared outside all functions are global to the entire program.
For example, constants declared with a #define at the top of a program are visible to the entire program.
The following program uses both local and global variables:
*/

#define TAM 5

int global1 = 3;  
 
int main() {  
int local1, local2; 
  
local1 = 5;  
local2 = 10;  
global1 = local1 + local2;  
printf("%d \n", global1); /* 15 */  
 
return 0;  
}  