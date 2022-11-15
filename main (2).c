//getchar() e putchar()

//The gets() function is used to read input as an ordered sequence of characters, also called a string. 
//A string is stored in a char array.

#include <stdio.h>  
 
int main() {  
//printf("Digite uma letra:");
char a = getchar();  
printf("You entered: %c", a);    

char c = 's';
  putchar(c);
 
return 0;  
} 