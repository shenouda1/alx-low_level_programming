#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: Get a random number and print the number
* and if it is positive, negative, or zero
* Return: 0
*/
int positive_or_negative(int n)
{
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);

return (0);
}
