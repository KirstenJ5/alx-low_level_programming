#include "main.h"
/* betty style doc for function main goes there */
/**
 * int _isupper - Function that checks for uppercase character
 *
 *@c: Print Uppercase
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
