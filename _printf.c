#include "holberton.h"

/**
 * _printf - formats and print data
 * @format: Our pointer
 * Return: Return Value
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j = 0;
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
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(list, format);
	if (!format)
	{
		exit(98);
	}
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (j < 10)
			{
				if (*(fmt[j].specifier) == format[i])
					fmt[j].f(list), break;
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
 * print_octal - Our octal function
 * @list: Macro Varible
 * Return: Length
 */

int print_octal(va_list list)
{
	char tmp[20];
	int i, len;

	_itoa(va_arg(list, int), tmp, 8);
	for (len = 0; tmp[len] != 0; len++)
	{
		;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(tmp[i]);
	}
	return (len);
}

/**
 * print_hex - Prints Hexidecimal
 * @list: Macro Varible
 * Return: Length of list
 */

int print_hex(va_list list)
{
	char tmp[20];
	int i, len;

	_itoa(va_arg(list, int), tmp, 16);
	for (len = 0; tmp[len] != 0; len++)
	{
		;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(tmp[i]);
	}
	return (len);
}

/**
 * print_rev - Our function to reverse int
 * @list: macro varible
 * Return: Zero
 */

int print_rev(va_list list)
{
	return (0);
}

/**
 * print_rot13 - Function for rot13
 * @list: varible macro
 * Return: zero
 */

int print_rot13(va_list list)
{
	return (0);
}
