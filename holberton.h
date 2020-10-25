#ifndef HOLBERTON_H_
#define HOLBERTON_H_

int _printf(const char *format, ...);
int _strlen_recursion(char *s);
int _putchar(char c);
void strrev(char *s);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_u_int(va_list list);
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_rev(va_list list);
int print_rot13(va_list list);
int(*funtion (char))(va_list list);

typedef strcut formats{
	char *specifier;
	int(*f)(va_list list);
}format_specifiers;


#endif /* HOLBERTON_H_ */
