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
char *comma = "";
va_start(words, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
{
printf("%s%c", comma, va_arg(words, int));
charprinted++;
}
else if (format[i] == 's')
{
printf("%s%s", comma, va_arg(words, char *));
charprinted++;
}
else if (format[i] == '%')
{
putchar('%');
}
else
{
putchar(format[i]);
charprinted++;
}
}
}
va_end(words);
return (charprinted);
}
