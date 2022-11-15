#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character in decimal
 *
 * Return: 1 if c is a letter - lower or upper case -, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
