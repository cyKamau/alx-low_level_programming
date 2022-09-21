#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 * x = 0
 * y = 1
 * z = 1
 * x = 1
 * y = 1
 * z = 2
 * x = 1 
 * y = 2
 * z = 3
 * x = 2
 * y = 3
 * z = 5
 * 0,1,1,2,3,5,8,13...
*/

int main(void)
{
	int count;
	unsigned long x, y, z;

	x = 0;
	y = 1;

	for (count = 1; count <= 49; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}

	printf("%lu\n", z + x);
	return (0);
}
