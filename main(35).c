#include <stdio.h>
#include <stdlib.h> 

/*
A void pointer is used to refer to any address type in memory and has a declaration that looks like: 
        void *ptr; 
  */
 
void* square (const void *num) {  
int result;  
result = (*(int *)num) * (*(int *)num);  
return result;  
} 

int compare (const void *elem1, const void *elem2) {  
if ((*(int *)elem1) == (*(int *)elem2))  
return 0;  
else if ((*(int *)elem1) < (*(int *)elem2))  
return -1;  
else  
return 1;  
}

int main(void) {
  int x = 33;  
  float y = 12.4;  
  char c = 'a';  
  void *ptr; 
  
ptr = &x;  
printf("void ptr points to %d\n", *((int *)ptr));  
ptr = &y;  
printf("void ptr points to %f\n", *((float *)ptr));  
ptr = &c;  
printf("void ptr points to %c", *((char *)ptr)); 

  //You cannot perform pointer arithmetic with void pointers.

  //-------------Functions Using void Pointers----------

  /*  
Void pointers are often used for function declarations. 
For example: 
      void * square (const void *);  
Using a void * return type allows for any return type. Similarly, parameters that are void * accept any argument type. If you want to use the data passed in by the parameter without changing it, you declare it const. 
*/
  int xx, sq_int;  
x = 6;  
sq_int = square(&xx);  
printf("\n\n%d squared is %d\n", xx, sq_int);  

  //----------Function Pointers as Arguments ------------

  /* Another way to use a function pointer is to pass it as an argument to another function. 
A function pointer used as an argument is sometimes referred to as a callback function because the receiving function "calls it back". 
The qsort() function in the stdlib.h header file uses this technique. 

void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))  

To breakdown the qsort declaration: 
void *base A void pointer to the array. 
size_t num The number of elements in the array. 
size_t width The size of an element. 
int (*compare (const void *, const void *) A function pointer which has two arguments and returns 0 when the arguments have the same value, <0 when arg1 comes before arg2, and >0 when arg1 comes after arg2. 
*/
  int arr[5] = {52, 23, 56, 19, 4};  
int num, width, i;  
 
num = sizeof(arr)/sizeof(arr[0]);  
width = sizeof(arr[0]);  
qsort((void *)arr, num, width, compare); 
 for (i = 0; i < 5; i++)  
printf("%d ", arr[ i ]);
  
  return 0;
}