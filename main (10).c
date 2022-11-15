//SWITCH
#include <stdio.h>

//break - força saída de um laço de repetição ou um switch..case

/*
a mesma forma que o comando if, o comando switch case controla o fluxo do programa permitindo ao programador especificar código diferente para ser executado em várias condições. Em particular, um comando switch compara o valor de uma variável aos valores especificados nos comandos case. Quando um comando case é encontrado cujo valor é igual ao da variável, o código para esse comando case é executado.

A palavra-chave break interrompe o comando switch, e é tipicamente usada no final de cada case. Sem um comando break, o comando switch irá continuar a executar as expressões seguintes (desnecessariamente) até encontrar um break, ou até o final do comando switch ser alcançado.

}
  */
int main(void) {
int num = 3;  
 
switch (num) {  
case 1:  
printf("One\n");  
break;  
case 2:  
printf("Two\n");  
break;  
case 3:  
printf("Three\n");  
break;  
default:  
printf("Not 1, 2, or 3.\n");  
} 
  
    return 0;
}