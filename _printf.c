#include "holberton.h"

/**
 * _printf - formats and print data
 * @
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	printf("program_starts\n");

	va_start(list, format);


	if(!format)
	{
		printf("formart is null\n");
		exit (98);
	}

	while (format && format[i])
	{


		if (format[i] == '%')
		{
			printf("Precent found\n");
			 get_format_func(format[i + 1]);
		}
		else
			_putchar(format[i]);
		i++;
	}


	va_end(list);
	return (i);
}
