#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Description: finds the first occurrence of the substring needle
 *		in the string haystack. The terminating null bytes (\0) are not compared.
 *
 * Return: pointer to the beginning of the located substring, else, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				k = i;
				while (needle[j] && haystack[i])
				{
					if (haystack[i] == needle[j])
					{
						i++, j++;
					}
					else
					{
						j = 0;
						break;
					}
				}
			}
		}
	}
	if (j != 0)
	{
		return (&(haystack[k]));
	}
	else
	{
		return (NULL);
	}
}
