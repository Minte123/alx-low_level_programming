#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "Holberton";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

