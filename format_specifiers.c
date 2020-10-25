#include "holberton.h"

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_char(va_list list)
{
	printf("print_char function\n");
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

	printf("inside print_string function\n");
	s = va_arg(list, char *);

	if (!s)
		s = "(null)";

	while (s[i])
	{
		printf("Inside while loop\n");
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

	printf("inside print_int function\n");

	_itoa(va_arg(list, int));
	s = va_arg(list, char *);

	if (!s)
		s ="(null)";

	while (s[i])
	{
		printf("inside while loop\n");
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
 * Return:  zero
 */

int print_binary(va_list list)
{
	printf("Inside the print_binary function\n");
	return (0);
}
