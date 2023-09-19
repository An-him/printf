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
int i, charprinted = 0;
char comma;
char percent = '%';
size_t len = 0;
va_start(words, format);
while (*format)
{
if (*format == '%')
{
i++;
if (*format == 'c')
{
comma = (char)va_arg(words, int);
write(STDOUT_FILENO, &comma, 1);
charprinted++;
}
else if (*format == 's')
{
char *s = va_arg(words, char *);
len = 0;
while (*s != '\0')
{
write(STDOUT_FILENO, s, len);
s++;
charprinted += len;
}
}
else if (*format == '%')
{
write(STDOUT_FILENO, &percent, 1);
charprinted++;
}
else
{
write(STDOUT_FILENO, format, 1);
charprinted++;
}
}
}
va_end(words);
return (charprinted);
}
