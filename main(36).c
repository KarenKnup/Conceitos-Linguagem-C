#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  This function returns the converted integral number as an int value. If no valid conversion could be performed, it returns zero.
*/

int main(void) {
 int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

  /*
    char number[10];
    gets(number);
    int result = atoi(number);
  */
  return 0;
}