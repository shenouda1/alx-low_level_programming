#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints numbers with coma
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
