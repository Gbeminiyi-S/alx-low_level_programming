#include <stdio.h>

char *string_toupper(char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "";
	char *p;

	p = string_toupper(s);
	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
