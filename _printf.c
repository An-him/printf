#include "main.h"
/**
*_printf - function output according to a format.
*@format: dormat speciiier for output
*@...: for the variable number of args
*Return: number of characters printed - '\0'
**/
int _printf(const char *format, ...)
{
va_list words;
int charprinted = 0;
char comma;
char percent = '%';
size_t len = 0;
va_start(words, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
comma = (char)va_arg(words, int);
charprinted += write(STDOUT_FILENO, &comma, 1);
}
else if (*format == 's')
{
char *s = va_arg(words, char *);
while (*s != '\0')
{
len++;
charprinted += write(STDOUT_FILENO, s++, 1);
}
}
else if (*format == '%')
{
charprinted += write(STDOUT_FILENO, &percent, 1);
}
}
else
{
charprinted += write(STDOUT_FILENO, format, 1);
}
format++;
}
va_end(words);
return (charprinted);
}
