#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ar_list);
int print_str(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_num_d(va_list ar_list);
int print_num_i(va_list ar_list);
int print_binary(va_list b_list);
int print_unsigned_int(va_list ar_list);
int print_octal(va_list ar_list);
int print_lower_hexa(va_list ar_list);
int print_upper_hexa(va_list ar_list);
char *convert(long int num, int base);
int print(char *str);
int print_pointer(va_list ar_list);
int print_reverse(va_list ar_list);
int print_rot13(va_list ar_list);
int print_str_unprintable(va_list ar_list);

#endif
