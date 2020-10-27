#include "holberton.h"

/**
 * get_format_func - Function for file
 * @format: argument
 * @fmt: Argument call
 * @list: Macro varible
 *
 * Return: out function pulled
 */

int get_format_func(const char *format, format_specifiers fmt[], va_list list)
{
	int i, j, val, len;

	len = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fmt[j].specifier != NULL; j++)
			{
				if (format[i + 1] == fmt[j].specifier[0])
				{
					val = fmt[j].f(list);
					if (val == -1)
						return (-1);
					len = len + val;
					break;
				}
				if (format[i + 2] == fmt[j].specifier[0])
				{
					i++;
					val = fmt[j].f(list);
					if (val == -1)
						return (-1);
					len = len + val;
					break;
				}
			}
			if (fmt[j].specifier == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len = len + 2;
				}
				else
					return (-1);
			}
				i = i + 1;
		}
			else
			{
				_putchar(format[i]);
				len++;
			}
		}
	return (len);
}
