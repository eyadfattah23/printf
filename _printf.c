#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: len of string;
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _printf - produces output according to a format.
 * @format: character string
 * @...: arguments to print
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, count = 0;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += _char_print(args);
					break;
				case 's':
					count += _puts(args);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
				case 'i':
					count += print_number(va_arg(args, int));
					break;
				case 'b':
					count += print_binary(va_arg(args, unsigned int));
					break;
				default:
					count += _putchar('%') + _putchar(format[i]);
					break;
			}
		} else
			count += _putchar(format[i]);
	}
	va_end(args);
	return (count);
}
