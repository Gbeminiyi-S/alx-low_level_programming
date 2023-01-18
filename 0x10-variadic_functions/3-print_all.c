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

	if (!string)
		string = "(nil)";
	printf("%s", string);
}

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *separator = "";
	prt format_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	va_start(list, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if ((format[i] == format_funcs[j].symbol))
			{
				printf("%s", separator);
				format_funcs[j].print(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
