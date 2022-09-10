/*
 * File: 2-print_alphabet.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * description - using main function
 *
 * Return: Description of the returned value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	putchar('\n');

	return (0);
}
