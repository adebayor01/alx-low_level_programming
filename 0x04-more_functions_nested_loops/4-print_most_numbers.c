#include "main.h"

/**
 * print_most_numbers - prints number except two and four
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50 || n == 52))
		{
			continue;
		}
		putchar(n);
	}

	putchat(10);
}
