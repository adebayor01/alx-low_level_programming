#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: one for char and else zero
 */
int _isalpha(int c)
{
	if (c >= 65; c <= 90; c++) || (c >= 97; c <= 122; c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
