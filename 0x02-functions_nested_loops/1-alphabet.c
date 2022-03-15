#include"main.h"
/* main -Entry point
 *
 * Return 0 Always Successe
 *
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

