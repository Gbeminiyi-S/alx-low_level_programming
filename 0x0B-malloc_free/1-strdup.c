#include "main.h"

/**
 * _strdup - creates a new string which is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: pointer to the array, else, NULL
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	ptr = malloc(sizeof(char) * (i + 1));

	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';

	return (ptr);
}

