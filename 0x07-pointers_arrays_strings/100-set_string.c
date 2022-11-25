#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to string s
 * @to: pointer to string to
 */
void set_string(char **s, char *to)
{
	if (s && to)
	{
		*s = to;
	}
}

