#include "main.h"
/**
 * _printf - my printf function
 * @format: holds the test and format specifier
 * Return: int
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	va_list ap;
	int charsprinted;

	charsprinted = 0;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
			charsprinted = charsprinted + _printSpecifier(*(++format), ap);
		else
			charsprinted = charsprinted + write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (charsprinted);
}
