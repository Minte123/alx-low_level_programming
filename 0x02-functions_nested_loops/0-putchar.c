#include "holberton.h"
/**
 * main - Check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char text[10] = "Holberton";
	int i = 0;

	for(i=0; i < 9; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return 0;
}

