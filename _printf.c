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
	unsigned int i, count = 0;

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
					count++;
					continue;
				case 's':
					printf("%s", va_arg(str, char *));
					count++;
					continue;
				case '%':
					printf("%%");
					count++;
					continue;
				}
				break;
		}
		printf("%c", format[i]);
		count++;
	}
	va_end(str);
	return (count);
}
