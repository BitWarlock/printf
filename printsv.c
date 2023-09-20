#include "main.h"

/**
 * print_address - prints address.
 * @args: va_list arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_address(va_list args, flag_t *fun)
{
	char *str;
	unsigned long int p = va_arg(args, unsigned long int);

	register int count = 0;

	(void)fun;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_bigS - prints a string, and hexa for non-printable chars.
 * @args: va_list arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_bigS(va_list args, flag_t *fun)
{
	int	i, count = 0;
	char	*res;
	char	*s = va_arg(args, char *);

	(void)fun;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * print_rev - prints a string in reverse.
 * @args: va_list args.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_rev(va_list args, flag_t *fun)
{
	int	i = 0, j;
	char	*s = va_arg(args, char *);

	(void)fun;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * print_rot13 - prints a string using rot13.
 * @args: list of arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_rot13(va_list args, flag_t *fun)
{
	int	i, j;
	char	rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char	*s = va_arg(args, char *);

	(void)fun;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * print_percent - prints a percent.
 * @args: va_list argument.
 * @fun: pointer to the struct flag.
 * Return: number of bytes printed.
 */

int	print_percent(va_list args, flag_t *fun)
{
	(void)args;
	(void)fun;
	return (_putchar('%'));
}

