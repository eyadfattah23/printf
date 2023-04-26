#include "main.h"
/**
 * _putchar - fuction to print one letter
 *
 * @c: letter to be printed
 *
 * Return: int - 1 (Success),
 * -1 (Failed)
 */
int _putchar(char c)
{
	static int b_size;
	static char buf[1024];

	if (c == -1 || b_size >= 1024)
	{
		write(1, buf, b_size);
		b_size = 0;
	}

	if (c != -1)
		buf[b_size++] = c;

	return (1);
}