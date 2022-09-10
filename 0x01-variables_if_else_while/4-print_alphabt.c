#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * description - using main function
 *
 * Return: Description of the returned value
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	
		if (c != 'q' && c != 'e')
	
			putchar(c);
	

	putchar('\n');

	return (0);
}
