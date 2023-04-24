#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
int print_number(int n)
{
	unsigned int num;
	unsigned int i = 1;

	if (n < 0)
	{
		num = -1 * n;
		_putchar('-');
	} else
		num = n;
	if (num / 10 != 0)
	{
		i++;
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
	return (i);
}
