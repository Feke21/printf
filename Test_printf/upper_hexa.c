#include "main.h"

int is_lowercase(char c);
char *string_to_upper(char *);

/**
 * print_upper_hexa - print hexadecimal characters in uppercase
 * @ar_list: list of arguments
 * Return: size of characters
 */

int print_upper_hexa(va_list ar_list)
{
	char *bufferx;
	int size;

	bufferx = convert(va_arg(ar_list, unsigned int), 16);
	bufferx = string_to_upper(bufferx);

	size = print((bufferx != NULL) ? bufferx : "NULL");
	return (size);
}
/**
 * is_lowercase - check if argument is lowercase
 * @c: char argument
 * Return: lowercase character
 */


int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * string_to_upper - convert string to uppercase
 * @str: string argument
 * Return: converted string
 */

char *string_to_upper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
