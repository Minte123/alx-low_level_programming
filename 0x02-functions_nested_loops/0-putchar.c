#include<main.h>
/**
 * main - Check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char text[12] = "Alx School";
	int i = 0;

	for(i=0; i < 11; i++)
	{
		_putchar(text[i]);
	}

	_putchar(\n);

	return 0;
}

