#include <unistd.h>

/**
 * main -Entry Point
 *
 *
 * Return: Alway 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
