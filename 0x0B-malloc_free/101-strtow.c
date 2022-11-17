#include "main.h"

/**
 * strtow - splits a string into words
 * @str: pointer to string containing words
 *
 * Return: pointer to an array of string, else, NULL
 */
char **strtow(char *str)
{
	char **ptr = NULL;
	int i, j, k, index = 0, size_w, size_c;

	if (str == NULL)
	{
		return (NULL);
	}
	size_w = word_count(str);
	if (size_w == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char *) * (size_w + 1)); /* +1 for NULL teminator */
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < size_w; i++)
	{
		k = 0;
		size_c = char_count(str, &index);
		ptr[i] = malloc(sizeof(char) * (size_c + 1));

		for (j = index - size_c; j < index; j++, k++)
		{
			ptr[i][k] = str[j];
		}
		ptr[i][k] = '\0';
	}
	ptr[i] = NULL;

	return (ptr);
}

/**
 * word_count - finds the number of words
 * @str: pointer to string containing words
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i, word = 0;

	for (i = 0; str[i];)
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (word);
}
/**
 * char_count - finds the number of characters in word
 * @str: pointer to string containing words
 * @index: pointer to index
 *
 * Return: number of characters
 */
int char_count(char *str, int *index)
{
	int i = *index, chars = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] && str[i] != ' ')
	{
		i++, chars++;
	}
	*index = i;

	return (chars);
}
