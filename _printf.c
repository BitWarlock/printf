#include "main.h"

/**
 * _printf - custom stdio printf.
 * @format: format string.
 * Return: The number of bytes printed.
 */

int _printf(const char *format, ...)
{
	const char *s;
	va_list args;
	flag_t flags = {0, 0, 0};

	register int count = 0;

	int (*pfun)(va_list, flag_t *);

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]) ||
			(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	for (s = format; *s; s++)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*s, &flags))
				s++;
			pfun = get_print(*s);
			count += (pfun)
				? pfun(args, &flags)
				: _printf("%%%c", *s);
		}
		else
			count += _putchar(*s);
	}

	_putchar(-1);
	va_end(args);

	return (count);
}

