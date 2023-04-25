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
	static int curr_buf_size;
	static char buffer[1024];

	if (c == -1 || curr_buf_size >= 1024)
	{
		write(1, buffer, curr_buf_size);
		curr_buf_size = 0;
	}

	if (c != -1)
		buffer[curr_buf_size++] = c;

	return (1);
}