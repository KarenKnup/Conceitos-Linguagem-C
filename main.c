//Modelo de Função

#include <stdio.h>

int multiplica (int n1, int n2){
  int r;
  r=n1*n2;
  return r;}

void exibe (int res){
  printf("\nResultado: %d", res);}

int main(void) {
  //7*4
  int m1;

  m1=multiplica(7,4);
  exibe (m1);
  
    return 0;
}