#include "main.h"
/**
 * _puts - function to print string
 *
 * @list: char to be printed
 * Return: int - length of the string
 */
int _puts(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
	str = "(null)";
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	i++;
	}
	return (i);
}
