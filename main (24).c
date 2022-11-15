//CONVERSÃO DE VARIÁVEIS
#include <stdio.h>
#include <string.h>

/*
  A format specifier can include several options along with a conversion character: 
        %[*][max_field]conversion character 
The optional * will skip the input field. 
The optional max_width gives the maximum number of characters to assign to an input field. 
The conversion character converts the argument, if necessary, to the indicated type: 
            d decimal 
            c character 
            s string 
            f float 
            x hexadecimal 
*/
int main(void) {
  int x,y;
  char text[20];

  scanf("%2d %d %*f %5s",&x, &y, text);
  //input: 1234  5.7  elephant
  printf("%d %d %s",x,y,text);
  //output: 12  34  eleph
  
  return 0;
}