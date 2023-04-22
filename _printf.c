#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string
 * @...: arguments to print
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list str;
	unsigned int i, c = 0;

	if (format == NULL)
	{
		return (0);
	}

	va_start(str, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		/* code */
		switch (format[i])
		{
		case '%':
				switch (format[++i])
				{
				case 'c':
					printf("%c", va_arg(str, int));
					c++;
					continue;
				case 's':
					printf("%s", va_arg(str, char *));
					c++;
					continue;
				case '%':
					printf("%%");
					c++;
					continue;
				}
				break;
		}
		printf("%c", format[i]);
		c++;
	}
	va_end(str);
	return (c);
}
