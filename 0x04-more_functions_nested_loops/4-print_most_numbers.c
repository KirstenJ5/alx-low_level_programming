#include "main.h"
/* betty style doc for function main goes there */
/**
* print_most_numbers - Print 0 -9 excl. 2 & 4
*
*
*
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
