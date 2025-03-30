#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include <stdarg.h>

int _printf(const char *, ...);
int handle_cases(const char *, va_list);
int _putchar(char);
int _print_int(int);
int _strlen(char *);
int _print_string(char *);
int _print_double(double);

#endif
