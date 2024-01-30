#include "main.h"
/**
*_putchar - prints a char through int
*@c: int in question
*Return: 0
**/
int _putchar(int c)
{
return (write(1, &c, 1));
}
