#include "main.h"

/**
 * print_num_u - function to print unsigned decimal.
 * @n: number to print.
 * @count: bytes printed.
 * Return: nothing.
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
