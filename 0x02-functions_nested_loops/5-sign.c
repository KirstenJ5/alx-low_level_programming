#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_sign - Function that prints the sign of a number
 *
 * @n:
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
