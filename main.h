#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_number(va_list);
int print_number(va_list);
int print_unsigned_int(va_list);
int print_octal(va_list);
int print_lower_hexa(va_list);
int print_upper_hexa(va_list);
int print_pointer(va_list);
int print_reverse(va_list);
int print_rot13(va_list);
int print_str_unprintable(va_list);

#endif
