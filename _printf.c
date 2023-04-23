#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: length of string
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
    char *str_to_print;

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
                    _putchar((char)va_arg(args, int));
                    count++;
                    break;
                case 's':
                    str_to_print = va_arg(args, char *);
                    _puts(str_to_print);
                    count += _strlen(str_to_print);
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
                case 'd':
                case 'i':
                    printf("%d", va_arg(args, int));
                    count++;
                    break;
                default:
                    /* handling unknown specifiers */
                    _putchar('%');
                    _putchar(format[i]);
                    count += 2;
                    break;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
    }

    va_end(args);

    return (count);
}