#include "main.h"

/**
 * printxo - prints numbers in hex and octal formats.
 * @n: The number to be printed.
 * @format: The format specifier ('x', 'X', or 'o').
 * @count: Pointer to the count of bytes printed.
 * Return: void.
 */

void	printxo(unsigned int n, char format, int *count)
{
	unsigned int	len;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	else if (format == 'o')
		base = "01234567";

	len = (format == 'o') ? 8 : 16;

	if (n < len)
	{
		_putchar(base[n % len], count);
	}
	else
	{
		printxo(n / len, format, count);
		printxo(n % len, format, count);
	}
}
