#include "main.h"

/**
 * print_str_unprintable - unprint some characters
 * @ar_list: arg list
 * Return: number of printed char
 */
int print_str_unprintable(va_list ar_list)
{
	char *argument = va_arg(ar_list, char *);
	int sum = 0;

	if (!argument)
	{
		sum += _puts("(null)", 0);
		return (sum);
	}

	return (_puts(argument, 1));
}
