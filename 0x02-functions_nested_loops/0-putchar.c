#include <main.h>
/**
 * main - prints putchar
 *
 * Return: Always 0
 */
int main(void)
{
char *ch = "_putchar\n";
  while (*ch)
    {
  putchar (*ch);
  ch++;
    }
  
  return (0);
}
