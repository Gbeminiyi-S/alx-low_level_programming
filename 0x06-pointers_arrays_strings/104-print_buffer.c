#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: bytes of b to be printed
 *
 * Description: Each line starts with the position of the first byte of the
 *			line in hexadecimal (8 chars), starting with 0.
 *			Each line shows the hexadecimal content (2 chars) of the buffer,
 *			2 bytes at a time, separated by a space.
 *			Each line shows the content of the buffer. If the byte is a
 *			printable character,print the letter, if not, print.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, step = 0;

	while (i < size)
	{
		printf("%.8x: ", i);
		j = i;
		while (j < i + 10)
		{
			if (j < size)
			{
				printf("%.2x", b[j]);
			}
			else
			{
				printf("  ");
			}
			step++;
			if (step % 2 == 0)
			{
				printf(" ");
			}
			j++;
		}
		while (i < j && i < size)
		{
			if (isprint(b[i]))
			{
				printf("%c", b[i]);
			}
			else
			{
				printf(".");
			}
			i++;
		}
		printf("\n");
	}
}
