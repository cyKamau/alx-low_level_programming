#include <stdio.h>
/**
* main - print if the number is between 00 and 89
*
* Description: using the main function
* this program will print "Programming is between 00 and 89
* Return: 0
*/
int main(void)
{
int d;
for (d = 0 ; d < 100 ; d++)
{
	putchar((d / 10) + '0');
	putchar((d % 10) + '0');
if (d != 99)
{
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
