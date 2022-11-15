//BREAK E CONTINUE

#include <stdio.h>

int main(void) {
  //--------- CONTINUE
int num = 5;  
 
while (num > 0) {  
num--;  
if (num == 3)  
continue;  
 
printf("%d\n", num);  
} 

  printf("\n--------------------\n");
  //---------------BREAK
  int n = 5;  
 
while (n > 0) {  
if (n == 3)  
break;  
printf("%d\n", n);  
n--;  
} 
  
  return 0;
}