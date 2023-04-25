#include "main.h"

/**
 * print_u_helper - prints unsigned integer helper
 * @list: argument list
 * Return: printed chars
 */
int print_u_helper(va_list list)
{
	int count = 0;
	unsigned int n = va_arg(list, unsigned int);

	count += print_u(n);
	return (count);
}
/**
 * print_x_helper - prints hexa helper
 * @list: argument list
 * Return: printed chars
 */
int print_x_helper(va_list list)
{
	int count = 0;
	unsigned int n = va_arg(list, unsigned int);

	count += print_x(n);
	return (count);
}
/**
 * print_X_helper - prints HEXA helper
 * @list: argument list
 * Return: printed chars
 */
int print_X_helper(va_list list)
{
	int count = 0;
	unsigned int n = va_arg(list, unsigned int);

	count += print_X(n);
	return (count);
}
/**
 * print_o_helper - prints octal helper
 * @list: argument list
 * Return: printed chars
 */
int print_o_helper(va_list list)
{
	int count = 0;
	unsigned int n = va_arg(list, unsigned int);

	count += print_o(n);
	return (count);
}
