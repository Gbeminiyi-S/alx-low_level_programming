#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string
 *
 * Return: pointer to string
 */
char *rot13(char *str)
{
	int i, j;
	char *letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
