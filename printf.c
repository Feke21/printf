#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that returns the number of characters
 * printed excluding the null byte used to end output to strings
 * @format: character string
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int length = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char(va_arg(args, int));
					break;
				case 's':
					print_str(va_arg(args, char*));
					break;
				case '%':
					print_percent(va_arg(args, int __attribute__(unused)));
					break;
				case 'd':
					print_number(va_arg(args, int));
					break;
				case 'i':
					print_number(va_arg(args, int));
					break;
				case 'b':
					print_binary(va_arg(args, unsigned int));
					break;
				case 'u':
					print_unsigned_int(va_arg(args, unsigned int));
					break;
				case 'o':
					print_octal(va_arg(args, unsigned int));
					break;
				case 'x':
					print_lower_hexa(va_arg(args, unsigned int));
					break;
				case 'X':
					print_upper_hexa(va_arg(args, unsigned int));
					break;
				case 'p':
					print_pointer(va_arg(args, void *));
					break;
				case 'r':
					print_reverse(va_arg(args, int *));
					break;
				case 'R':
					print_rot13(va_arg(args, int *));
					break;
				case 'S':
					print_str_unprintable(va_arg(args, int *));
					break;
				default:
					_putchar('%');
					_putchar(*format);
					break;
			}
		}
		else
			putchar(*format);
		format++;
		length += 1;
	}
	va_end(args);

	return (length);
}
