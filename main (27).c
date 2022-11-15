//OPERADORES

#include <stdio.h>
/* Operadores:
  soma - +
2 + 2 ~~ 2 operandos e 1 operador
  subtração - -
  divisão - / e % (resto da divisão)
  multiplicação - *
  */
int main(void) {
int i1 = 10;  
int i2 = 3;  
int quotient, remainder;  
float f1 = 4.2;  
float f2 = 2.5;  
float result;  

quotient=i1/i2;
printf("quotient = %d / %d = %d",i1,i2, quotient); // 3  
remainder = i1 % i2; // 1  
printf("\nremainder = %d %% %d = %d",i1,i2,remainder);
result = f1 / f2; // 1.68 
printf("\nresult = %.2f / %.2f = %.2f\n",f1,f2,result);

        //Ordem de cálculo
  /*
    C evaluates a numeric expression based on operator precedence. 
The + and – are equal in precedence, as are *, /, and %. 
The *, /, and % are performed first in order from left to right and then + and -, also in order from left to right. 
You can change the order of operations by using parentheses ( ) to indicate which operations are to be performed first. 
For example, the result of 5 + 3 * 2 is 11, where the result of (5 + 3) * 2 is 16. 

1º ~~ * e / e %
2º ~~ + e -
*/
  int a = 6;  
int b = 4;  
int c = 2;  
int result2;  
result = a - b + c; // 4  
printf("%d \n", result2);  
 
result = a + b / c; // 8  
printf("%d \n", result2);  
 
result = (a + b) / c; // 5  
printf("%d \n", result2);  

  //--------------------------------
  float price = 6.50;  
int increase = 2;  
float new_price;  
 
new_price = price + increase;  
printf("New price is %4.2f", new_price);  
/* Output: New price is 8.50 */  

  float average;  
int total = 23;  
int count = 4;  
 
average = (float) total / count;  
/* average = 5.75 */ 
  printf("\n %.2f",average);

//----------------------------------
  int x1 = 3;  
x1 = x1 + 1;
  printf("\n%d",x1); //x+=1 -> x=x+1

  
  int x = 2;  
x += 1; // 3  
x -= 1; // 2  
x *= 3; // 6  
x /= 2; // 3  
x %= 2; // 1  
x += 3 * 2; // 7 
printf("\n %d",x = x + (3 * 2));

  //Increment & Decrement
  int z = 3;  
 a = z--; /* assign 3 to a, then decrement z to 2 */
  printf("\n a= %d e z= %d",a,z);
  
int y = 3;  
a = ++y; /* increment y to 4, then assign 4 to a */ 
  printf("\n a= %d e y= %d",a,y);
  
  
int x2 = 8;
int y2 = 7;
x2++;
x2+= y2--;//16
 

  return 0;
}