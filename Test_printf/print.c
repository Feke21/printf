#include "main.h"

/**
 * print - print string
 * @str: string parameter
 * Return: number of characters printed after writing string to stdout
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
