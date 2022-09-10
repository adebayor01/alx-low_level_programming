#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description using the main function
 *
 * This program prints 'Progamming is positive, zero, or negative'
 * return: 0
 * 
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Your code goes there */

	if (n > 0)
	{
		printf("%i is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero \n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative \n", n);
	}
	return (0);
}