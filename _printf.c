#include "main.h"

/**
 * flag_handle - handles formatting flags for _printf.
 * @args: argument list.
 * @format: format string.
 * @count: number of bytes printed.
 * Return: void.
 */

static void	flag_handle(va_list args, const char format, int *count)
{
	if (format == 'c')
		_putchar((char)va_arg(args, int), count);
	else if (format == 's')
		print_str(va_arg(args, char *), count);
	else if (format == '%')
		_putchar(format, count);
	else if (format == 'd' || format == 'i')
		putnbr(va_arg(args, int), count);
	else if (format == 'u')
		print_num_u(va_arg(args, unsigned int), count);
	else if (format == 'x' || format == 'X' || format == 'o')
		printxo(va_arg(args, unsigned int), format, count);
	else if (format == 'b')
		print_binary(va_arg(args, unsigned int), count);
}

/**
 * charput - prints char.
 * @c: char.
 * Return: void.
 */

void	charput(char c)
{
	write(1, &c, 1);
}

/**
 * _printf - custom stdio printf.
 * @format: format string.
 * Return: The number of bytes printed.
 */

int	_printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			flag_handle(args, *format, &count);
		}
		else
			_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
