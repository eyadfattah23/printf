#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
*/
int print_number(int n)
{
	int count = 0;

	if (n < 0) 
	{ 
	count++; 
	n = -n; 
	} 

	if (n > 0) 
	{ 
	count += print_number(n / 10); 
	}

	count++; 
	_putchar(n % 10 + '0'); 

	return count;
}
