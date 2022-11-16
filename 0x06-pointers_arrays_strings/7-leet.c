#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char char_l[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char char_u[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char code[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; code[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == char_l[i] || str[j] == char_u[i])
			{
				str[j] = code[i];
			}
		}
	}

	return (str);
}
