#include <stdio.h>
/*
* main - print the lowercase alphabet
*
* Return: 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
