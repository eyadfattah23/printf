#include "main.h"

/**
 * print_number - print integer
 * @n: number to print
 * Return: integer to print
 */
int print_number(int n)
{
	unsigned int nn, count = 0;
	char buffer[12];
	int i = 0;

	if (n < 0)
	{
		count += _putchar('-');
		nn = -1 * n;
	} else
	{
		nn = n;
	}

	do {
		buffer[i++] = (nn % 10) + '0';
		nn /= 10;
	} while (nn > 0);

	while (--i >= 0)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
/**
 * print_number_helper - prints an integer
 * @list: argument list to be printed from
 * Return: number of digits
 */
int print_number_helper(va_list list)
{
	int n = va_arg(list, int), count = 0;

	count += print_number(n);
	return (count);
}
