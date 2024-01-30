#include "main.h"
/**
*_printSpecifier - prints the format specified
*@format: char to parse
*@ap: macro to access the args
*Return: int
**/
int _printSpecifier(char format, va_list ap)
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

case 'b':
Total = _toBinary(va_arg(ap, unsigned int));
break;

else
Total += write(1, &format, 1);
return (Total);
}
