#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_arg(args, int));
int print_str(va_arg(args, char*));
int print_percent(va_arg(args, char __attribute__(unused)));
int print_number(va_arg(args, int));
int print_number(va_arg(args, int));
int print_binary(va_arg(args, unsigned int));
int print_unsigned_int(va_arg(args, unsigned int));
int print_octal(va_arg(args, unsigned int));
int print_lower_hexa(va_arg(args, unsigned int), a);
int print_upper_hexa(va_arg(args, unsigned int), A);
int print_pointer(va_arg(args, void *));
int print_reverse(va_arg(args, *char));
int print_rot13(va_arg(args, *char));
int print_str_unprintable(va_arg(args, *char));

#endif
