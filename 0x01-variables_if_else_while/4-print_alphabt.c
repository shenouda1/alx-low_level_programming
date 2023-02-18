#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == 'e')
	continue;
	if (i == 'q')
	continue;
	putchar(i);
	}
	putchar('\n');
	return (0);
}
