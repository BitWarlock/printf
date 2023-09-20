#include "main.h"

/**
 * print_int - prints an integer.
 * @args: va_list of arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed
 */

int	print_int(va_list args, flag_t *fun)
{
	int	n = va_arg(args, int);
	int	res = count_digit(n);

	if (fun->space == 1 && fun->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (fun->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_unsigned - prints an unsigned integer.
 * @args: va_list arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_unsigned(va_list args, flag_t *fun)
{
	unsigned int	u = va_arg(args, unsigned int);
	char	*str = convert(u, 10, 0);

	(void)fun;
	return (_puts(str));
}

/**
 * print_number - helper function.
 * @n: integer to be printed.
 */
void	print_number(int n)
{
	unsigned int	n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - counts digits.
 * @i: integer.
 * Return: number of digits.
 */

int	count_digit(int i)
{
	unsigned int	a = 0;
	unsigned int	b;

	if (i < 0)
		b = i * -1;
	else
		b = i;
	while (b != 0)
	{
		b /= 10;
		a++;
	}
	return (a);
}

