#include "main.h"
#include <stdlib.h>

/**
 * _puts - write all char from string to stdout
 * @str: string to print
 * @ascii: enable ascii restriction
 *
 * Return: number of printed char
 */

int _puts(char *str, int ascii)
{
	char *s;
	int i = 0, sum = 0;

	while (str[i])
	{
		if (((str[i] >= 0 && str[i] < 32) || str[i] >= 127) && ascii)
		{
			s = convert_base(str[i], 16, 1);
			sum += write(1, "\\x", 2);
			if (str[i] >= 0 && str[i] < 16)
				sum += _putchar('0');
			sum += _puts(s, 0);
			free(s);
			i++;
		}
		else
		{
			sum += _putchar(str[i]);
			i++;
		}
	}
	return (sum);
}

/**
 * convert_base - convert unsigned from base 10 to base
 * @nb: decimal number
 * @base: base to convert from
 * @upper: upper case check
 *
 * Return: converted number to string
 */

char *convert_base(unsigned long nb, unsigned int base, int upper)
{
	int i = 0;
	char *str;
	unsigned long nbr = nb;

	while (nbr >= base)
	{
		nbr /= base;
		i++;
	}
	str = malloc(sizeof(char) * i + 2);
	if (!str)
		return (0);
	str[i + 1] = '\0';

	while (i >= 0)
	{
		nbr = nb % base;
		str[i] = convert_alpha_numeric(nbr, upper);
		nb /= base;
		i--;
	}
	return (str);
}

/**
 * convert_base_pointer - convert pointer void to ul
 * @p: pointer
 *
 * Return: converted string
 */

char *convert_base_pointer(unsigned long p)
{
	unsigned long adress;
	char *str;

	adress = p;
	if (adress == 0)
		return ("0");
	str = convert_base(adress, 16, 0);
	return (str);
}

/**
 * print_pointer - print pointer
 * @ar_list: argument list
 *
 * Return: pointer
 */
int print_pointer(va_list ar_list)
{
	char *str;
	int sum = 0;
	unsigned long p = (unsigned long) va_arg(ar_list, void*);

	if (!p)
	{
		sum += _puts("(nil)", 0);
		return (sum);
	}

	str = convert_base_pointer(p);
	if (!str)
		return (0);
	sum += _puts("0x", 0);
	sum += _puts(str, 0);
	free(str);
	return (sum);
}
