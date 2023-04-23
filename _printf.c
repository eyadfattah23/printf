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
	char *str_case;

	if (format == NULL)
	{
		return (0);
	}
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar((char) va_arg(args, int));
					count++;
					break;
				case 's':
					str_case = va_arg(args, char *);
					if (str_case == NULL)
					{
						_puts("(null)");
						count += 5;
					} else
					{
					_puts(str_case);
					count += _strlen(str_case);
					}
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
				case 'i':
					int num = va_arg(args, int);
					printf("%d", num);
					count++;
					break;
				default:
					/*handling unknown specifiers*/
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;
			}
		} else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
