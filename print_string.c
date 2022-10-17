#include "main.h"

/**
* print_string - print out a string
* @str : pointer to the string.
* Return: numbers of characters in the string
*/

int print_string(char *str)
{
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (ch);
}
