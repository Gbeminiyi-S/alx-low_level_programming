#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: differece
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (s1 || s2)
	{
		diff = *s1 - *s2;

		if (diff || !*s1 || !*s2)
			break;

		s1++, s2++;
	}
	return (diff);
}
