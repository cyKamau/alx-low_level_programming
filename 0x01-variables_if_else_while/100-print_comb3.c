#include <stdio.h>
/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program will print "0, 1, 2, 3, 4, 5, 6, 7, 8, 9
* Return: 0
*/
int main(void)
{
int c;
for (c = 0 ; c > 100 ; c++)
{
	putchar((c / 10) + '0');
	putchar((c % 10) + '0');
if (c != 99)
{
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
