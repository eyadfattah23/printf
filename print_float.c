#include "main.h"
#include <math.h>
/**
 * print_float - prints a floating-point number with a default of 2 decimal places
 * @f: floating-point number to be printed
 * Return: number of characters printed
 */
int print_float(float f)
{
int count = 0;
int decimal_places = 2;
int integer_part = (int)f;
float decimal_part = f - integer_part;

if (f < 0)
{
count += _putchar('-');
integer_part = -integer_part;
decimal_part = -decimal_part;
}

count += print_number(integer_part);
count += _putchar('.');

int decimal_multiplier = pow(10, decimal_places);
int decimal_as_int = decimal_part * decimal_multiplier;

count += print_number(decimal_as_int);

return count;
}
