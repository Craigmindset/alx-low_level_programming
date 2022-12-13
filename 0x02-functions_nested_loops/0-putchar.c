#include <stdio.h>
/**
 *this purpose of the program 
 *is to print _putchar only
 *
 */
int main(void)
{

  /*using a for loop statement */

  char* ch = "_putchar\n";
  while (*ch) {
  putchar (*ch);
  ch++;
  }
  return(0);



}
