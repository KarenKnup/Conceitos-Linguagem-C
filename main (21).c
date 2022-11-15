//SIZEOF
#include <stdio.h>
//The amount of storage required for each of these types varies by platform. 
//C has a built-in sizeof operator that gives the memory requirements for a particular data type.

int main(void) {
printf("int: %ld \n", sizeof(int));  
printf("float: %ld \n", sizeof(float));  
printf("double: %ld \n", sizeof(double));  
printf("char: %ld \n", sizeof(char));  
  /*
    The printf statements in this program have two arguments. The first is the output string with a format specifier (%ld), while the next argument returns the sizeof value. In the final output, the %ld (for long decimal) is replaced by the value in the second argument. 
    */

  return 0;
}