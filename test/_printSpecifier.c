#include "main.h"
/**
 * _printSpecifier - prints the format specified
 * @format: char to parse
 * @ap: macro to access the args
 * Return: int
 */

int _printSpecifier(const char format, va_list ap)
{
int Total;

Total = 0;
switch (format)
{
case 'c':
Total += _putchar(va_arg(ap, int));
break;

case 's':
Total += _putstring(va_arg(ap, char *));
break;

case '%':
Total += _putchar('%');
break;

default:
Total += write(1, &format, 1);
break;
}
return (Total);
}
