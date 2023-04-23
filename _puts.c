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
 int i;

 i = 0;
 str = va_arg(list, char *);
 if (str == NULL)
  str = "(null)";

 while (str[i])
 {
  _putchar(str[i]);
  i++;
 }

 return (i);
}
