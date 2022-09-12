#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  program that prints combinations of two digits
 *
 * Description - using the main function
 *
 * Return: Description of the return value
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 9 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');	
	return (0);
}
