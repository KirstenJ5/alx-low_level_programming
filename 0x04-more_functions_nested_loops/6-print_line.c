#include "main.h"
/* betty style doc for function main goes there */
/**
* print_line - Function that draws a straight line
*
* @n:
*
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; 1 <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
