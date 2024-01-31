#include "main.h"
/**
 * _printf - emulates the printf function
 * format: first "character string" argument
 * Return: length of the string (int)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list(args);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%') /*format is not the % sign */
		{
			write(1, format, 1); /* write char to the stdout*/
			count++;
		}
		else /* if format is the % sign */
		{
			format++; /* skip to the next character */
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				/* this handles the %% */
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				/* this handles the %c character*/
				char c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				/*This handles a string*/
				char *str = va_arg(args, char *);
				int str_len = 0; /* Would be used to store the length of the string*/

				/* Calculate the length */
				while (str[str_len] != '\0') /*str[str_len is the same as "*(str + str_len)" */
					str_len++;
				write(1, str, str_len);
				count += str_len;
			}
		}
		format++;
	}

	va_end(args);

	return (count);
}
