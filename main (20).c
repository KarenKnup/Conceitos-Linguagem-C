//ACRÉSCIMO/DECRÉSCIMO EM REPETIÇÕES
#include <stdio.h>

void UM (int A){
  printf("\nA++:  A=A+1");
  while (A<=5){
   
    printf("\n%d",A);
    A++;
  }
}

void DOIS (int A){
  printf("\n\nA+=3:  A=A+3");
  while (A<=5){//números devem estar de A=1 até 5
   
    printf("\n%d",A);
    A+=3;
  }
}

void TRES (int A){
  printf("\n\nA*=2:    A=A*2");
  while (A<=5){//números devem estar de A=1 até 5
   
    printf("\n%d",A);
    A*=2;
  }
}

void QUATRO (int A){
  A=10;
  
  printf("\n\nA--:    A=A-1");
  while (A>=5){//números devem estar de A=1 até 5
   
    printf("\n%d",A);
    A--;
  }
}

int main(void) {
int A=1;
  
   UM(A);
  DOIS(A);
  TRES(A);
  QUATRO(A);
    
  
  return 0;
}