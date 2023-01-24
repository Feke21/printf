#include "main.h"

/**
 * _printf - main function to print the number of characters printed
 * @format: array of strings to print and check type
 * Return: count of character printed
 */


int _printf(const char *format, ...)
{
int amount = -1;
if (format != NULL)
{
int i;
va_list ar_list;
int (*o)(va_list);
va_start(ar_list, format);
if (format[0] == '%' && format[1] == '\0')
return (-1);
amount = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
amount += _putchar(format[i]);
i++;
}
else if (format[i + 1] != '\0')
{
o = get_func(format[i + 1]);
amount += (o ? o(ar_list) : _putchar(format[i]) + _putchar(format[i + 1]));
i++;
}
}
else
amount += _putchar(format[i]);
}
va_end(ar_list);
}
return (amount);
}
