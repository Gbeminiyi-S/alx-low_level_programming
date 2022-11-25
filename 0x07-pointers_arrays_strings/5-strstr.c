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
	unsigned int i, j;
	static int k;

	for (i = 0; haystack[i];)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[i] == needle[j])
			{
				i++, j++;
			}
		}
		if (needle[j] == '\0')
		{
			return (&(haystack[k]));
		}
		i++;
	}
	return (NULL);
}
