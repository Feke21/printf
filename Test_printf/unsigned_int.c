#include "main.h"

/**
 * print_unsigned_int - print unsigned int
 * @ar_list: list of arguments
 *
 * Return: number of unsigned ints
 */

int print_unsigned_int(va_list ar_list)
{
	char *unsigned_int;
	int size;

	unsigned_int = convert(va_arg(ar_list, unsigned int), 10);

	size = print((unsigned_int != NULL) ? unsigned_int : "NULL");
	return (size);
}
