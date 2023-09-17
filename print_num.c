#include "main.h"

/**
 * putnbr - function to print an int.
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

/**
 * print_num_u - Function to print unsigned decimal.
 * @n: number to print.
 * @count: bytes printed.
 * Return: nothing.
 */

void	print_num_u(unsigned int n, int *count)
{
	if (n < 10)
		_putchar(n + 48, count);
	else
	{
		putnbr(n / 10, count);
		putnbr(n % 10, count);
	}
}
