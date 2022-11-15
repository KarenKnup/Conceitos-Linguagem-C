//PRINTF
#include <stdio.h>
/*
  The printf function was introduced in your very first Hello World program. A call to this function requires a format string which can include escape sequences for outputting special characters and format specifiers that are replaced by values.
  Escape sequences begin with a backslash \:
              \n new line
              \t horizontal tab
              \\ backslash
              \b backspace
              \' single quote
              \" double quote

Format specifiers begin with a percent sign % and are replaced by corresponding arguments after the format string. A format specifier can include several options along with a conversion character:
        %[-][width].[precision]conversion character 
The conversion character converts the argument, if necessary, to the indicated type:
        d decimal
        c character
        s string
        f float
        e scientific notation
        x hexadecimal

To print the % symbol, use %% in the format string.

  */
int main(void) {
printf("The tree has %d apples.\n",22);
//The tree has 22 apples.

printf("\"Hello World!\"\n");
//"Hello World!"

printf("\\Hello!\n");

printf("_  \b\bHello!");

  //%[-][width].[precision]conversion character 
  
  printf("\n\n Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
//Color: red, Number: 42, float: 3.14

printf("Pi = %3.2f \n",3.14159);
//Pi = 3.14

printf("Pi = %8.5f \n", 3.14159);
//Pi = 3.14159

printf("Pi = %-8.5f \n", 3.14159);
//Pi = 3.14159

printf("There are %d %s in the tree.", 22, "apples");
//There are 22 apples in the tree.
  return 0;
}