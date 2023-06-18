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
int n, m;

for (n = 48; n <= 56; n++)
{
for (n = 49; m <= 57; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
