#include "main.h"
/* betty style doc for function main goes there */
/**
 *_islower - Check lowercase character
 *
 * @c:
 *
 * Return: 1 if c is true, return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
