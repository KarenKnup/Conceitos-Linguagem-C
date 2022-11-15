//FOR

#include <stdio.h>

/*
Em linguagem C, existem três estruturas de repetição (loops), são elas: 
for
while 
do…while.
  */

int main(void) {
 int contador; //variável de controle do loop
  
  for(contador = 1; contador <= 10; contador++)
  {
    printf("%d ", contador);
  }
  
//----------------------------------
  int i;//variável de controle do loop
  
  for (i = 1; i <= 3; i++)
  {
    printf("Aprendendo Linguagem C\n");
  }
  
    return 0;
}