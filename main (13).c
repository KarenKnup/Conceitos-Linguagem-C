//PONTEIRO
#include <stdio.h>

void X (int *px){
  *px=*px+2;
}

int main(void) {
//Variaveis
 int x;
  
//Usuario
  printf("x:  ");
  scanf ("%d",&x);

//Calculos e Resultados
X(&x);
printf("%d",x);
  
    return 0;
}