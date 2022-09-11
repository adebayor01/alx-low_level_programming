#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse
 *
 * description - using main function
 *
 * Return: Description of the return value
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
