#include "main.h"

/**
 * print_char - print character to stdout
 * @ar_list: list of arguments
 *
 * Return: @print_char
 */
int print_char(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}

/**
 * print_str - print string to stdout
 * @ar_list: list of arguments
 *
 * Return: @print_str
 */
int print_str(va_list ar_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
