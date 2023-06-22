#include "main.h"
/* betty style doc for function main goes there */
/**
* _abs - Compute the absolute value of an integer
*
* @b:
*
* Return: Always 0 (Success)
*/
int _abs(int b)
{
	if (b >= 0)
	{
		return (b);
	}
	else
	{
		return (b * -1);
	}

}
