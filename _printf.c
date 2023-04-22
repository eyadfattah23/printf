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

	va_start(str, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		/* code */
		switch (format[i])
		{
		case '%':
				switch (format[i +  1])
				{
				case 'c':
					printf("%c", va_arg(str, int));
					break;
				case 's':
					printf("%s", va_arg(str, char *));
					break;
				case '%':
					printf("%%");
					break;
				default:
					i++;	
					break;
				}
		default:
			printf("%c", format[i]);
			break;
		}
	}
	
}
