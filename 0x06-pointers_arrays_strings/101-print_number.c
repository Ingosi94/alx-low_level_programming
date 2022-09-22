#include "main.h"

/**
 *  print_number - Print an integer.
 *  @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > )
		print_number(num / 10);

	_putchar((num % 10) + '0');
}	
