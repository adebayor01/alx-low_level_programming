/*
 * File: 2-print_alphabet.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is main function
 *
 * description - using main function
 *
 * Returns: Description of the returned value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	putchar('\n');

	return (0);
}
