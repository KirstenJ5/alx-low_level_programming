#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 48 ; n < 58 ; n++)
{
putchar(n);
if (n != 57)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
