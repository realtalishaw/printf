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
 * _atoi - convert a string s to an integer
 * @s: The source array
 *
 * Return: The integer value or 0 if s isn't a number
 */
int _atoi(char *s)
{
	int i, sign = 1, digit = 0, st, en = 0, b = 1;
	int r = 0;

	for (i = 0; s[i] != '\0' && b; i++)
	{
		if (s[i] == '+' && digit != 1)
			sign = sign * 1;
		else if (s[i] == '-' && digit != 1)
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9' && digit == 0)
		{
			digit = 1;
			st = i;
		}
		else if (digit == 1 && (s[i] < '0' || s[i] > '9'))
		{
			b = 0;
			en = i - 1;
		}
	}
	if (en == 0)
		en = i - 1;
	for (i = st; i <= en; i++)
		r += (s[i] - 48) * _pow(10, (en - i)) * sign;
	return (r);
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

#include "holberton.h"
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
