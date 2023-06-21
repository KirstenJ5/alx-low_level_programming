#include "main.h"
/* betty style doc for function main goes there */
/**
* print_last_digit - Print the last digit of a number
*
* @b:
*
* Return: Always 0 (Success)
*/
int print_last_digit(int b)
{
	if (b < 0)
	{
		b = -1 * (b % 10);
		_putchar(b + 48);
		return (b);
	}
	_putchar(b % 10 + 48);
	return (b % 10);
}
