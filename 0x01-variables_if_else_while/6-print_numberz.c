#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all single digit
 *
 * description - using main function
 *
 * Return: Description of the return value
 */

int main(void)
{
	int i;
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar("%i", c);
	}
	putchar("\n");
	return (0);
}
