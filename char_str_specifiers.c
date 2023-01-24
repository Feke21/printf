#include "main.h"

/**
 * print_char - print character to stdout
 *@list: list of arguments
 *
 * Return: @print_char
 */
int print_char(va_list list)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - print string to stdout
 * @list: list of arguments
 *
 * Return: @print_str
 */
int print_str(va_list list)
{
	int i;
	char *str;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
