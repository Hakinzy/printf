#include "main.h"

/**
 * print_char - prints a character
 * @list: arguments list
 * Return: 1
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
