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
	char tmp[20];
	int i, len;

	_itoa(va_arg(list, int), tmp, 10);
	for (len = 0; tmp[len] != 0; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
      		_putchar(tmp[i]);
	}
	return (len);

}

/**
 * get_op_func - fsfsd
 * @s: jfgkjgdk
 *
 * Return: fjdkfjds
 */

int print_u_int(va_list list)
{
	char tmp[20];
        int i, len;

        _itoa(va_arg(list, int), tmp, 10);
        for (len = 0; tmp[len] != 0; len++)
                ;
        for (i = len - 1; i >= 0; i--)
        {
                _putchar(tmp[i]);
        }
        return (len);
}

/**
 * print_binary -
 * @list:
 *
 * Return:  zero
 */

int print_binary(va_list list)
{

	char tmp[20];
        int i, len;

        _itoa(va_arg(list, int), tmp, 2);
        for (len = 0; tmp[len] != 0; len++)
                ;
        for (i = len - 1; i >= 0; i--)
        {
                _putchar(tmp[i]);
        }
        return (len);
}
