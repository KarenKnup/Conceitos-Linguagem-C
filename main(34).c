#include <stdio.h>

/*
  Since pointers can point to an address in any memory location, they can also point to the start of executable code. 
Pointers to functions, or function pointers, point to executable code for a function in memory. Function pointers can be stored in an array or passed as arguments to other functions. 
 
A function pointer declaration uses the * just as you would with any pointer: 

return_type (*func_name)(parameters)  
*/
void say_hello(int num_times); /* function */ 

int add(int num1, int num2);  
int subtract(int num1, int num2);  
int multiply(int num1, int num2);  
int divide(int num1, int num2);  
 
int main() {  
void (*funptr)(int); /* function pointer */  
funptr = say_hello; /* pointer assignment */  
funptr(3); /* function call */  

  /*
    Therefore, although statements such as funptr = &say_hello and (*funptr)(3) are correct, it isn't necessary to include the address operator & and the indirection operator * in the function assignment and function call. 
    */

//------------ ARRAY OF FUNCTION POINTERS -------------
  int x, y, choice, result;  
int (*op[4])(int, int); 
  
op[0] = add;  
op[1] = subtract;  
op[2] = multiply;  
op[3] = divide; 
 printf("Enter two integers: ");  
scanf("%d%d", &x, &y);  
printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");  
scanf("%d", &choice);  
result = op[choice](x, y); 
 printf("%d", result);  

  /*
    The statement int (*op[4])(int, int); declares the array of function pointers. Each array element must have the same parameters and return type. In this case, the functions assigned to the array have two int parameters and return an int. The statement result = op[choice](x, y); executes the appropriate function based on the user's choice. 
    */
return 0;  
}  
 
void say_hello(int num_times) {  
int k;  
for (k = 0; k < num_times; k++)  
printf("Hello\n");  
} 

 
int add(int x, int y) {  
return(x + y);  
}  
 
int subtract(int x, int y) {  
return(x - y);  
}  
 
int multiply(int x, int y) {  
return(x * y);  
}  
 
int divide(int x, int y) {  
if (y != 0)  
return (x / y);  
else  
return 0;  
} 