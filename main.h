#ifndef MAIN_H
#define MAIN_H

/* A list of my header files to use */
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

/* Here are a list of my prototypes */

int _printf(const char *format, ...);

/* Prototypes for function specifiers */

int _printSpecifier(const char format, va_list ap);

/* For conversion specifiers */
int _putchar(int c);
int _putstring(char *str);

#endif /*ALX*/
