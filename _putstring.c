#include "main.h"
/**
 * _putstring - prints a string
 * @str: the string to print
 * Return: int
 */
int _putstring(char *str)
{
	int charPrinted;

	charPrinted = 0;

	while (*str == '\0')
	{
		_putchar(*(str++));
		charPrinted++;
	}
	return (charPrinted);
}
