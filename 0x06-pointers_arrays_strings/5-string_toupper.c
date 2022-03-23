#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of string to uppercase
 * @s: string array
 * Return: string array
 */

char *string_toupper(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] >= 'a' && s[z] <= 'z')
			s[z] = s[z] - 32;
	}

	return (s);
}
