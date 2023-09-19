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
size_t len;
va_start(words, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
{
comma = (char)va_arg(words, int);
write(STDOUT_FILENO, &comma, 1);
charprinted++;
}
else if (format[i] == 's')
{
char *s = va_arg(words, char *);
len = 0;
while (s[len] != '\0')
{
len++;
}
write(STDOUT_FILENO, s, len);
charprinted += len;
}
else if (format[i] == '%')
{

write(STDOUT_FILENO, &percent, 1);
charprinted++;
}
else
{
write(STDOUT_FILENO, &format[i], 1);
charprinted++;
}
}
}
va_end(words);
return (charprinted);
}
