#include "main.h"

/**
 * _abs - check absolute value
 * @x: integer
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x = -x);
	}
	else
		return (0);
}
