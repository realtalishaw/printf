#include "holberton.h"

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_string(va_list list)
{
	int i = 0;
	char *s;

	s = va_arg(list, char *);

	if (!s)
		s = "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_int(va_list list)
{
	int i = 0;
	char *s;

	_itoa(va_arg(list, int));
	s = va_arg(list, char *);

	if (!s)
		s ="(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_u_int(va_list list)
{
	return (0);
}

/**
 * print_binary -
 * @list:
 *
 * Return: 
 */

int print_binary(va_list list)
{
	return (0);
}
