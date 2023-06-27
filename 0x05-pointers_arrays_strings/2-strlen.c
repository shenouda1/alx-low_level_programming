#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return: x: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
