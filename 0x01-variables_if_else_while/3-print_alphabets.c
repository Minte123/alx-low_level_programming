#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;
	
	    i = 97;
	    n = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	
	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}
