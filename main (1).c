//Exemplo Loop (Repetições)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Em linguagem C, existem três estruturas de repetição (loops), são elas: 
for
while 
do…while.
  */
int main(void) {
  int valSort;
  int jafiz=0;
  srand(time(NULL)); //para inicializar
  
  while (jafiz<5){
    jafiz=jafiz+1;
    valSort=rand()%101;
    printf("\n%dº num: %d",jafiz, valSort);
  }
  
  return 0;
}