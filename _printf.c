#include "holberton.h"

/**
 * _printf - formats and print data
 * @
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	va_start(list, format);


	if(!format)
		exit (98);

	while (format && format[i])
	{
		if (format[i] == '%')
			 get_format_func(format[i + 1]);
		else
			_putchar(format[i]);
		i++;
	}


	va_end(list);
	return (i);
}
