//FUNÇÃO E PONTEIROS
#include <stdio.h>

void trocar (int *n1, int *n2){
  int aux;
  aux=*n1;
  *n1=*n2;
  *n2=aux;
}

void funcao (int a, float *b){
  //a=x
  a=a+10;
  *b=(*b-a)/2;
  //*b=conteúdo de b
}

int main(void) {
//Declaração de variáveis
  int x,y,auxiliar;
  x=10, y=20;
  
/* aux=x;
  x=y;
  y=aux;
  */
   printf("\ntrocar (antes): x=%d e y=%d",x,y);
  trocar (&x,&y);
  printf("\ntrocar (depois): x=%d e y=%d",x,y);
  
///Declaração de variáveis
  int a=5;
  float b=8.3;

  printf("\n\nfuncao (antes): a=%d e b=%.1f",a,b);
  funcao(a,&b);
  printf("\nfuncao (depois): a=%d e b=%.1f",a,b);
  
  return 0;
}