#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, else, 0
 */
int is_palindrome(char *s)
{
	int i, len = _strlen(s);

	for (i = 0; i < (len + 1) / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strlen - computes the length of a string
 * @s: pointer to string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
