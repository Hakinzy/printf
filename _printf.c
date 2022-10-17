#include "main.h"

/**
 * _printf - prints to stdout
 * @format: a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list list;

	va_start(list, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += print_char(list);
					i += 2;
					break;
				case 's':
					count += print_s_specifier(list);
					i += 2;
					break;
				case '%':
					_putchar('%');
					count++;
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);

	return (count);
}
