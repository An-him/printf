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
char buffer[2];
va_start(words, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
{
comma = va_arg(words, int);
buffer[0] = comma;
buffer[1] = '\0';
write(STDOUT_FILENO, buffer, 1);
charprinted++;
}
else if (format[i] == 's')
{
char *s = va_arg(words, char *);
write(STDOUT_FILENO, s, strlen(s));
charprinted += strlen(s);
}
else if (format[i] == '%')
{
buffer[0] = '%';
buffer[1] = '\0';
write(STDOUT_FILENO, buffer, 1);
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
