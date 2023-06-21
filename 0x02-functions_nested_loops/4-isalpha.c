#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c:
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 &&  c <= 122) || (c >= 65 &&  c <= 90))
	{
		return (1);
	}
	return (0);

}
