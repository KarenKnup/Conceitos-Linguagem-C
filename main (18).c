//TESTE DE PONTEIROS
#include <stdio.h>

void Funcao_2 (int *pd){
  *pd=*pd+6;
}

void Funcao_1 (int *pd){
  *pd=*pd+2;
}

int main(void) {
int d;

  printf("\nd = ");
  scanf("%d",&d);

Funcao_1(&d);
  
printf("\nd (Função 1) = %d",d);

Funcao_2(&d);
  
printf("\nd (Função 2) atual = %d",d);

  
  return 0;
}