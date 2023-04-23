#include "main.h"
/**
 * print_string - function to print string
 *
 * @x: char to be printed
 * Return: int - length of the string
 */
int print_string(va_list x)
{
 char *stri;
 int i;

 i = 0;
 stri = va_arg(x, char *);
 if (stri == NULL)
  stri = "(null)";

 while (stri[i])
 {
  _putchar(stri[i]);
  i++;
 }

 return (i);
}
