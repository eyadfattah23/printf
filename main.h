#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _puts(va_list list);
int _char_print(va_list list);
int print_number(int n);
int print_number_helper(va_list list);
int binary_helper(unsigned int n);
int print_binary(va_list list);
int percent_sign_print(va_list list);
int get_print(char specifier, va_list list);
/**
 * struct specifier_func - struct to link each specifier with
 *  the right function
 * @specifier: specifier
 * @func: print function
 */
typedef struct specifier_func
{
	char specifier;
	int (*func)(va_list);
} specifier_func;
#endif
