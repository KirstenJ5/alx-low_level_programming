#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_numbers - Function printing numbers 0 to 9
 *
 * _putchar - writes the character a to stdout
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
