#include "main.h"

/**
 * argstostr - concantenates all the arguments of your program
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Description: each argument should be followed by a '\n' in the new string
 * Return: pointer to the new string, else, NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, k = 0, char_count = 0;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			char_count++;
		}
	}
	ptr = malloc(sizeof(char) * (char_count + ac + 1)); /* +ac for '\n' */
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);
}
