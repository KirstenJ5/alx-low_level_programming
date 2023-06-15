#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int char_size = sizeof(char);
	int int_size = sizeof(int);
	int long_int = sizeof(long int);
	int long_long_int = sizeof(long long int);
	int float_ = sizeof(float);

        printf=("Size of a char: %i byte(s)\n", char_size);
	printf=("Size of an int: %i byte(s)\n", int_size);
	printf=("Size of a long int: %i byte(s)\n", long_int);
	printf=("Size of a long long int: %i byte(s)\n", long_long_int);
	printf=("Size of a float: %i byte(s)\n", float_);
	return (0);
}

