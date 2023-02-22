#include "main.h"

/**
 * _isalpha - Enrty point
 * Description: check for alphabet character
 *
 * @c: character
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
