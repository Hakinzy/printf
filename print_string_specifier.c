#include "main.h"
#include <stdarg.h>

/**
 * print_s_specifier - handles s specifier
 * @list: arguments list
 * Return: the numbers of the characters of the string
 */

int print_s_specifier(va_list list)
{
	return (print_string(va_arg(list, char *)));
}
