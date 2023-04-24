#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: number of digits
 */
int print_number(int n)
{
	int count = 0;
	char buf[11];
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	while (n > 0)
	{
		buf[i++] = n % 10 + '0';
		n /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buf[j]);
		count++;
	}
	return (count);
}
