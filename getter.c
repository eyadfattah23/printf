#include "main.h"

/**
 * get_print - Get the print object
 * @specifier: specifier
 * @list: arguments to print from
 * Return: number of printed chars
 */
int get_print(char specifier, va_list list)
{
	int i;
	specifier_func getters[] = {
		{'c', _char_print},
		{'s', _puts},
		{'%', percent_sign_print},
		{'i', print_number_helper},
		{'d', print_number_helper},
		{'b', print_binary},
		{'\0', NULL}
	};

	for (i = 0; (getters[i].specifier != '\0') && (getters[i].func != NULL); i++)
	{
		if (getters[i].specifier == specifier)
		{
			return (getters[i].func(list));
		}
	}
	return (0);
}
