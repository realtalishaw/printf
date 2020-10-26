#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 1024

char *itoa(int i, char *strout, int base);
int _printf(const char *format, ...);
int _strlen_recursion(char *s);
int _putchar(char c);
void _strrev(char *s);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_u_int(va_list list);
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_rev(va_list list);
int print_rot13(va_list list);
int (*get_format_func(char s))(va_list list);
int print_percent(va_list list);

/**
 * struct formats - Typedef struct
 * @specifier: Our specifer for struct
 * @f: Pointer
 * Description: Our structs for process
 */

typedef struct formats
{
	char *specifier;

	int (*f)(va_list list);


} format_specifiers;


#endif /* HOLBERTON_H_ */
