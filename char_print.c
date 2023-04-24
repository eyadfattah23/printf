#include "main.h"

/**
 * _char_print - prints a char from va_arg
 * @list: argument list
 * Return: 1(Success)
 */

int _char_print(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
