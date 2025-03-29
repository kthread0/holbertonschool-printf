#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *, ...);
int _putchar(char);
int _print_integers(int);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
