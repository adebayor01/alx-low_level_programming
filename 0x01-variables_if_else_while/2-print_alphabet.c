#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - program that prints the alphabet in lowercase
 * Description: Using mainfuction
 * returns:Always
 **/

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
