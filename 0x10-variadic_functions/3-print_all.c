#include "variadic_functions.h"

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_int(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

void print_str(va_list arg)
{
	char *string = va_arg(arg, char *);

	if (string)
		printf("%s", string);
	else
		printf("(nil)");
}

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	prt format_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	va_start(list, format);
	while (format[i])
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == format_funcs[j].symbol)
			{
				format_funcs[j].print(list);
				if (format[i + 1])
					printf(", ");
			}
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
