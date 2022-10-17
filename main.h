#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_s_specifier(va_list list);
int print_string(char *str);

#endif
