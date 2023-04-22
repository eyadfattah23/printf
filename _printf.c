#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string
 * @...: arguments to print
 * Return: 
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
				switch (format[i + 1])
				{
				case 'c':
					/* code */
					break;
				
				default:
					break;
				}
			break;
		
		default:
			break;
		}
	}
	
}
