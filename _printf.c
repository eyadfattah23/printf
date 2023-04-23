#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;
	while (s && s[len])
		len++;
	return (len);
}

/**
 * _printf - produces output according to a format.
 * @format: character string
 * @...: arguments to print
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	if (!format)
		return (-1);

	va_list args;
	va_start(args, format);

	int count = 0;
	char *str;

	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						count += _puts("(null)");
					else
						count += _puts(str);
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					count += printf("%d", va_arg(args, int));
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
			count += _putchar(*format);
	}

	va_end(args);
	return (count);
}