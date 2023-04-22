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
	unsigned int i;

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
					continue;
				case 's':
					printf("%s", va_arg(str, char *));
					continue;
				case '%':
					printf("%%");
					continue;
				}
				break;
		}
		printf("%c", format[i]);
	}
	va_end(str);
	return (i);
}
