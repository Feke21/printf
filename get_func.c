#include "main.h"

/**
 * get_func - search and return the correct function
 * @s: array to check
 * Return: return a function (if written correctly)
 */

int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_num_d},
		{"i", print_num_i},
		{"b", print_binary},
		{"x", print_lower_hexa},
		{"X", print_upper_hexa},
		{"o", print_octal},
		{"u", print_unsigned_int},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].c != NULL; i++)
	{
		if (*ops[i].c == s)
			return (ops[i].f);
	}
	return (NULL);
}
