#include "main.h"

/**
 * _print_int - prints integers
 * @num: The number to be printed
 * Return: Number of characters printed
 */
int _print_int(int num)
{
	char num_str[12];  /* Buffer for 32-bit int and null terminator */
	int i = 0, j, k, charprinted = 0;
	unsigned int temp;

	if (num == INT_MIN)
		return (write(1, "-2147483648", 11), 11);
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		charprinted++;
	}
	if (num == 0)
		return (write(1, "0", 1), 1);

	temp = (unsigned int)num;
	while (temp > 0)
	{
		num_str[i++] = (temp % 10) + '0';
		temp = temp / 10;
	}

	num_str[i] = '\0';

	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		char tmp = num_str[j];

		num_str[j] = num_str[k];

		num_str[k] = tmp;
	}

	write(1, num_str, i);

	return (charprinted + i);
}
