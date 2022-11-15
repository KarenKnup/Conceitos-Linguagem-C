//Constant (Constante) - número que não muda e é substituído nas funções que for mencionado

//usando 'const' ~ ocupa espaço da memória
#include <stdio.h>  

int main() {  
const double PI = 3.14;  
printf("%f", PI);  
 
return 0;  
} 

//usando #define ~ não ocupa espaço da memória
#include <stdio.h>  
 
#define PI 3.14 
  
int main() {  
printf("%f", PI);  
return 0;  
} 