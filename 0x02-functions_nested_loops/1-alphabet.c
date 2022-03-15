#include "main.h"

/**
 * main -Entry point
 *
 * print_alphabet.
 *
 * Return null
 */
void print_alphabet(void)
{
char let;
let = 'a';
while (let <= 'z')
{
_putchar(let);
let++;
}
_putchar('\n');
}

