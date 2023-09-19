#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: character for formatting
 *Return: int
 **/

int _printf(const char *format, ...)
{
va_list arg;
int done = 0;
va_start(arg, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
break;
if (*format == 'c')
{
char c = va_arg(arg, int);
write(1, &c, 1);
done++;
}
else if (*format == 's')
{
char *str = va_arg(arg, char *);
if (str == NULL)
str = "(null)";
while (*str)
{
write(1, str, 1);
str++;
done++;
}
}
else if (*format == '%')
{
write(1, "%", 1);
done++;
}
else
{
write(1, "%", 1);
write(1, format, 1);
done += 2;
}
}
else
{
write(1, format, 1);
done++;
}
format++;
}
va_end(arg);
return done; 
}
