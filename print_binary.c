#include "main.h"

/**
 * binary_helper - print number of binary digits
 * @n: number
 * Return: number of digits
 */
int binary_helper(unsigned int n)
{
	int count = 0;
	char buffer[33];
	int i = 0;

	do {
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	} while (n > 0);

	while (--i >= 0)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
/**
 * print_binary - prints an integer
 * @list: arguments to be printed from
 * Return: number of binary digits
 */
int print_binary(va_list list)
{
	int count = 0;
	unsigned int n = va_arg(list, unsigned int);

	count += binary_helper(n / 2);
	_putchar(n % 2 + '0');
	count++;
	return (count);
}
