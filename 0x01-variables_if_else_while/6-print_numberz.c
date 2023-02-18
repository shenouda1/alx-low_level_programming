#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints number from 0 to 9
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
