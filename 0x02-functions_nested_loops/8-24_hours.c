#include "main.h"
/* betty style doc for function main goes there */
/**
*jack_bauer - Print every minute of the day
*
*
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int i;
	int a;

	for ( i = 48; i <= 50; i++)
	{
		for (a = 48 ;a < 57; a++)
		{
			_putchar(i);
			_putchar(a);
			_putchar(':');
		}
	}
}
