#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, else, 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (palindrome_check(s, len, 0));
}

/**
 * palindrome_check - helper function to check if palindrome
 * @s: pointer to string
 * @len: string length
 * @i: char index
 *
 * Return: 1 if palindrome, else, 0
 */
int palindrome_check(char *s, int len, int i)
{
	if (i >= (len + 1) / 2)
	{
		return (1);
	}
	if (s[i] != s[len - i - 1])
	{
		return (0);
	}
	return (palindrome_check(s, len, i + 1));
}

/**
 * _strlen - computes the length of a string
 * @s: pointer to string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
