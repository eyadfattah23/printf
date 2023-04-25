/**
 * print_u - prints unsigned integer
 * @n: number to print
 * Return: printed chars
 */
int print_u(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += print_u(n / 10);
	}

	count++;
	_putchar((n % 10) + '0');
	return (count);
}
/**
 * print_o - prints octal
 * @n: num to print
 * Return: printed chars
 */
int print_o(unsigned int n)
{
	int count = 0;

	if (n / 8)
	{
		count += print_o(n / 8);
	}
	count++;
	_putchar((n % 8) + '0');
	return (count);
}
/**
 * print_x - prints hexa
 * @n: num to print
 * Return: printed chars
 */
int print_x(unsigned int n)
{
	int count = 0;

	if (n / 16)
	{
		count += print_x(n / 16);
	}

	count++;
	_putchar((n % 16) < 10 ? (n % 16) + '0' : (n % 16 - 10) + 'a');

	return (count);
}
/**
 * print_X - prints HEXA
 * @n: num to print
 * Return: printed chars
 */
int print_X(unsigned int n)
{
	int count = 0;

	if (n / 16)
	{
		count += print_X(n / 16);
	}

	count++;
	_putchar((n % 16) < 10 ? (n % 16) + '0' : (n % 16 - 10) + 'A');

	return (count);
}
