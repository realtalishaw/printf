#include "holberton.h"

/**
 * _printf - formats and print data
 * @
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int j = 0;
	format_specifiers fmt[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_u_int},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hex},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

	va_start(list, format);


	if(!format)
	{
		exit (98);
	}

	while (format && format[i])
	{


		if (format[i] == '%')
		{
			i++;
			while (j < 9)
			{
				if (*(fmt[j].specifier) == format[i])
				{
					fmt[j].f(list);
					break;
				}
				else
					j++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}


	va_end(list);
	return (i);
}
/**
 * print_octal -
 *
 *
 */

int print_octal(va_list list)
{
	return (0);
}

/**
 * print_hex -
 * @list: 
 * 
 * Return:
 */

int print_hex(va_list list)
{
	return (0);
}

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_rev(va_list list)
{
	return (0);
}

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_rot13(va_list list)
{
	return (0);
}
