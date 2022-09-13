#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Determines if a number is positive, negative or zero
*
* Description: using the main function
* this program prints "Programming is positive, negative or zero
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	/* yur code is there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
