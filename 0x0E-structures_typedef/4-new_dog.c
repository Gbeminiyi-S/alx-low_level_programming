#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *new = malloc(sizeof(dog_t));

	if (!new)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new->name)
	{
		free(new);
	}
	for (i = 0; name[i]; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';

	new->age = age;

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new->owner)
	{
		free(new->name);
		free(new);
	}
	for (i = 0; owner[i]; i++)
	{
		new->owner[i] = owner[i];
	}
	new->owner[i] = '\0';

	return (new);
}

/**
 * _strlen - computes length of string
 * @str: string
 *
 * Return: result
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
