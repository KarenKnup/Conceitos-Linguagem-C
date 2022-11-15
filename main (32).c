//STATIC VARIABLES

#include <stdio.h>

/*
  Static variables have a local scope but are not destroyed when a function is exited. Therefore, a static variable retains its value for the life of the program and can be accessed every time the function is re-entered. 
A static variable is initialized when declared and requires the prefix static. 
The following program uses a static variable: 
*/
 
void say_hello();  
 
int main() {  
int i;  
 
for (i = 0; i < 5; i++) {  
say_hello();  
}  
 
return 0;  
}  

void say_hello() {  
static int num_calls = 1;  
 
printf("Hello number %d\n", num_calls);  
num_calls++;  
 
}  