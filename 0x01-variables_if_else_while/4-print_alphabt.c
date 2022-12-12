#include <stdio.h>
/**
 *main  - Entry Point
 *Return     Alaways return upon success
 * Description: if else statement
 *Betty style doc implemented
 */
int main (void)
{

  char c;

  for (c = 'a'; c <= 'z'; ++c)
    {
     if (c == 'e')
	continue;
      else if (c  == 'q')
	continue;
      else

	putchar(c);
    }
  putchar(10);
  return (0);
}
