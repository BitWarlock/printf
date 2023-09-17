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
					print_str(va_arg(args, char *), &count);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					format++;
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
