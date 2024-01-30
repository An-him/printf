#include "main.h"
/**
*_putstring - writes a pointer *str to stdout
*@str: pointer to char
*Return: int
**/

int _putstring(char *str)
{
int Charsprinted;
Charsprinted = 0;

while (*str != '\0')
{
_putchar(*str);
Charsprinted++;
str++;
}


return (Charsprinted);
}
