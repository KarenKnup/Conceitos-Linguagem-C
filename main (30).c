//PARAMETER, ARGUMENT & VALUE

#include <stdio.h>

void Fun (char s[]){ // s - parameter 
  printf("Hello, %s",s); 
}

int MyFun (int x){
  return 5+x; // 2 parameters  
  //value (2) = 5+2 = 3
}

int main(void) {
Fun("Liam"); //Liam - argument

  return 0;
}