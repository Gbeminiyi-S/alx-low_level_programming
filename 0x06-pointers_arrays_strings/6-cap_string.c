#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, j;
	char separator[] = {' ', '\t', '\n', ',', ';', '.', '!',
					'?', '"', '(', ')', '{', '}', '\0'};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] += ('A' - 'a');
	}

	for (i = 0; separator[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (separator[i] == str[j])
			{
				if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
				{
					str[j + 1] += ('A' - 'a');
				}
			}
		}
	}
	return (str);
}
