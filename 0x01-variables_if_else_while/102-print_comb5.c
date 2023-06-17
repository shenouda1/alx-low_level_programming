#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: program that prints all possible different combinations of
 * two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (x = i; x <= '9'; x++)
			{
				for (y = j + 1; y <= '9'; y++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);

					if (!((i == '9' && j == '8') &&
					      (x == '9' && y == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				y = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
