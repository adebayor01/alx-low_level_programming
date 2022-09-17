#include "main.h"

/**
 * _isupper - check if a character is uppercase or not.
 * @c: character to be tested
 *
 * Return: one whether it is otherwise zero
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
