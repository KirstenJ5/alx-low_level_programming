#include "main.h"
/* betty style doc for function main goes there */
/**
* more_numbers - Function that prints the numbers from 0 to 14
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int i;
	int j;

		for (i = 1; 1 <= 10; i++)
		{
			for (j = 0; j <= 14; j++)
			{
				if (j >= 10)
				{
					_putchar('i');
					_putchar(j % 10 + '0');
				}
				_putchar('\n');
			}
		}
}
