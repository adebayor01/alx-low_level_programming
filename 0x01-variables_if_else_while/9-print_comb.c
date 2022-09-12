#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints combinations of single-digit numbers
 *
 * Description - using main function
 *
 * Return: Description of the return value
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
