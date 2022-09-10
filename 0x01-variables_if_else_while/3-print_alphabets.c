#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * description: using main function
 *
 * return: Description of the returned value
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)

		putchar(c);

	putchar('\n');
	
	return (0);
}
