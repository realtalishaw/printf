#include "holberton.h"

/**
 * get_format_func -
 * 
 *
 *
 */

int (*get_format_func(char s))(va_list list)
{
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

	int i = 0;
	printf("inside get_format function\n");

	while (i < 9)
	{

		if (*(fmt[i].specifier) == s)
			{
				printf("found specifier: %s\n", fmt[i].specifier
					);

				return (fmt[i].f);
			}
		printf("specifier not found\n");
			i++;
	}
	printf("exiting file none found\n");
	return (0);
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
