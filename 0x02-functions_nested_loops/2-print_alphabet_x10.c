#include "main.h"

/**
 * main -Entry
 *
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char let = 'a';

	while (round < 10)
	{
		let = 'a';
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar('\n');

		round++;
	}
}
