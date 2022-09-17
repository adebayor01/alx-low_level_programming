#include "main.h"

/**
 * print_numbers - function that print all numbers from zero to nine
 *
 * Return: return nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
