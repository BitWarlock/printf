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

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
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
