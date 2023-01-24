#include <stdlib.h>
#include "main.h"

/**
 * convert_alpha_numeric - convert digits to char
 * @nb: digit or number
 * @upper: upper case check
 * Return: converted value
 */
int convert_alpha_numeric(int nb, int upper)
{
	if (nb >= 10)
		return (nb - 10 + ((upper) ? 'A' : 'a'));
	else
		return (nb + '0');
}
