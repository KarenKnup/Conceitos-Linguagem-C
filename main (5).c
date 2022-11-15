//scanf

//The & sign before the variable name is the address operator. It gives the address, or location in memory, of a variable. This is needed because scanf places an input value at a variable address
// \n ~~~ \ = quebra da linha ~ n = newline

#include <stdio.h>  
 
int main() {  
int a;  
//printf("Digite um número:\n");
scanf("%d", &a);  
 
printf("You entered: %d", a);  
 
return 0;  
} 

 