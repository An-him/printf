#include "main.h"
/**
 * _putstring - prints a string
 * @str: the string to print
 * Return: int
 */
int _putstring(char *str)
{
	int charprinted;

	charprinted = 0;

	while (str[charprinted] != '\0')
	{
		write (1, &str[charprinted], 1);
		charprinted++;
	}
	return (charprinted);
}
