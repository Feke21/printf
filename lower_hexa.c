#include "main.h"
/**
 * print_lower_hexa - print hexadecimal numbers in lowercase
 * @ar_list: argument list
 *
 * Return: size
 */

int print_lower_hexa(va_list ar_list)
{
	char *x_buffer;
	int size;

	x_buffer = convert(va_arg(ar_list, unsigned int), 16);
	size = print((x_buffer != NULL) ? x_buffer : "NULL");

	return (size);
}
