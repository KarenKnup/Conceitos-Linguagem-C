//String

//The gets() function is used to read input as an ordered sequence of characters, also called a string. 
//A string is stored in a char array.

#include <stdio.h>  
 
int main() {  
char a[100];  
 
gets(a);  
 
printf("You entered: %s", a);  
 
return 0;  
} 

//função getchar() ~ pega 1 char só
#include <stdio.h>

int main(void) {
char a = getchar(); 
  printf("Você digitou: %c ", a);
  
    return 0;
}


//Vários chars
#include <stdio.h>

int main(void) {
char k = getchar(); 
char a = getchar();
char r = getchar();
char e = getchar();
char n = getchar();

  printf("Você digitou: %c%c%c%c%c ", k,a,r,e,n);
  
  //se escrever 'karen' vai aparecer "Você digitou: Karen"

  #include <stdio.h>  
 
int main() {  
printf("Digite uma palavra:");
char a = getchar();  
 
printf("\nYou entered: ");  
putchar(a);  
 
return 0;  
}  
    return 0;
}