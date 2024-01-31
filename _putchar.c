#include "main.h"
/**
 * _putchar - writes to stdout
 * @c: argument to write
 * Return: int
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
