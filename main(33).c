#include <stdio.h>
#include <string.h>

//1-são diferentes / 0-são iguais


int main() {
  char str1[] = "abcd", str2[] = "aBCd", str3[] = "abcd";
  int result;

  // comparing strings str1 and str2:
  result = strcmp(str1, str2); 
  printf("\n strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3:
  result = strcmp(str1, str3);
  printf(" strcmp(str1, str3) = %d\n", result);

  return 0;
}