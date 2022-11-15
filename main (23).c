//PUTS()
#include <stdio.h>
//The puts() function is used to display output as a string. A string is stored in a char array.

int main(void) {
char a[100];  
 
gets(a);  
 
printf("You entered: ");  
puts(a);  

  return 0;
}