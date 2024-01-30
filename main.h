#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(int c);
int _printSpecifier(char format, va_list ap);
int _putstring(char *str);
#endif
