#include <stdio.h>
/**
 * main - print single digits seperated by , followed by space
 *
 * Return: (0) Always
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x);
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
