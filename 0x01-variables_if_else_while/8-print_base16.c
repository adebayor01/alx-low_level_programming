#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all the numbers of base sixteen
 *
 * Description - using the main function
 *
 * Return: Description of the return value
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 16) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
