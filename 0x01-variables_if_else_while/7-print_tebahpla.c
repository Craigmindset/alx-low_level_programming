#include <stdio.h>
/**
 * main	-	Entry point
 * Return:	Always return 0 (success)
 * Description: If else statement
 * betty style doc for function main goes there
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar(10);
	return (0);
}
