#include "holberton.h"

/**
 * _strlen_recursion - length of string
 * @s: The string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 * _strlen_recursion(s + 1));
}

/**
 * itoa - convert an interger to a string
 * @i: ingerger
 * @strout: Our strout
 * @base: Base
 * Return: character from interger
 */
char *itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit, sign = 0;
	if (i < 0) {
		sign = 1;
		i *= -1;
	}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * strrev - prints string in reverse
 * @s: takes in a string
 */
void strrev(char *s)
{
	int i = 0, c;

	while (s[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
