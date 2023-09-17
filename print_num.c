#include "main.h"

/**
 * putnbr - function that prints a number.
 * @n: number to print.
 * @count: bytes printed.
 * Return: void.
 */

void	putnbr(int n, int *count)
{
	long	nb;

	nb = n;
	if (n < 0)
	{
		_putchar('-', count);
		nb *= -1;
	}
	if (nb < 10)
		_putchar(nb + 48, count);
	else
	{
		putnbr(nb / 10, count);
		putnbr(nb % 10, count);
	}
}
