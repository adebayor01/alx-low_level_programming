#include "main.h"

/**
 * _isdigit - check wether a character is a digit or not
 * @c: tested character
 *
 * Return: one if it is digit, zero otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
