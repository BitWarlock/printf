#include "main.h"

/**
 * print_string - prints a string.
 * @args: va_list arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_string(va_list args, flag_t *fun)
{
	char *s = va_arg(args, char *);

	(void)fun;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character.
 * @args: va_list arguments.
 * @fun: pointer to the struct.
 * Return: bytes printed.
 */

int	print_char(va_list args, flag_t *fun)
{
	(void)fun;
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * _putchar - same as putchar.
 * @c: The character to be printed.
 * Return: On success 1, -1 otherwise.
 */

int	_putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string.
 * @str: pointer to the string.
 * Return: bytes printed.
 */

int	_puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

