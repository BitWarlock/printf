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

/**
 * print_binary - prints in binary.
 * @n: number to print.
 * @count: bytes printed.
 * Return: nothing.
 */

void	print_binary(unsigned int n, int *count)
{
	char	binary[33];
	int	i = 0;
	int	j;

	if (n == 0)
	{
		_putchar('0', count);
		return;
	}

	while (n > 0)
	{
		binary[i++] = (n % 2) + 48;
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j], count);
}
