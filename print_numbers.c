#include "main.h"

/**
 * print_num_d - Print decimal digits (%d)
 * @ar_list: Store the arguments
 * Return: amount of printed numbers
 */

int print_num_d(va_list ar_list)
{
	unsigned int Abs, aux_Num, num_zero, amount;
	int num;

	amount = 0;

	num = va_arg(ar_list, int);

	if (num < 0)
	{
		Abs = (num * -1);
		amount += _putchar(45);
	}
	else
		Abs = num;

	aux_Num = Abs;
	num_zero = 1;
	while (aux_Num > 9)
	{
		aux_Num /= 10;
		num_zero *= 10;
	}

	while (num_zero >= 1)
	{
		amount +=  _putchar(((Abs / num_zero) % 10) + '0');
		num_zero /= 10;
	}
	return (amount);
}
/**
 * print_num_i - Print the integers (%i)
 * @ar_numlist: Store numbers
 * Return: amount of printed numbers
 */
int print_num_i(va_list ar_list)
{
		return (print_num_d(ar_list));
}
