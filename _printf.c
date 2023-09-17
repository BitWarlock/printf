#include "main.h"

/**
 * _printf - recreation of stdio printf funtion.
 * @format: the format string.
 * Return: numberof printed bytes.
 */

int	_printf(const char *format, ...)
{
	va_list	args;
	int	count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char	c = (char)va_arg(args, int);

						_putchar(c);
						count++;
						break;
					}
				case 's':
					{
						char	*str = va_arg(args, char *);
						if (str)
							print_str(str, &count);
						else
							print_str("(null)", &count);
						break;
					}
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					count++;
					_putchar(*format);
					count++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
		va_end(args);
		return (count);
}
