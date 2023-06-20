#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet(void) - Print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
_putchar('\n');

}
