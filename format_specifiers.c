#include "holberton.h"

/**
 * print_char - Prints our char
 * @list:  macro varible
 * Return: 1
 */

int print_char(va_list list)
{

	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints string required
 * @list: our macro varible
 * Return: interger
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
 * print_int - prints interger
 * @list: Macro Varible
 * Return: List
 */

int print_int(va_list list)
{
	char tmp[20];
	int i, len, n;
  n = va_arg(list, int);

  if (n < 0)
  {
    pr_int(n);
  }  
  else
	  _itoa(n, tmp, 10);
	for (len = 0; tmp[len] != 0; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(tmp[i]);
	}
	return (len);

}

/**
 * print_u_int - Prints an unsigned int
 * @list: macro vaible
 * Return: Length required
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
 * print_binary - Prints results in binary
 * @list: macro varible
 * Return:  length of list
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
