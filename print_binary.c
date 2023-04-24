#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2) 
	{ 
	count += print_binary(n / 2); 
	} 

	count++; 
	_putchar(n % 2 + '0'); 

	return count; 
}