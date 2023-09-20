#include "main.h"

/**
 * print_hex - prints a number in hexa.
 * @args: va_list arguments.
 * @fun: pointer to the struct flag.
 * Return: bytes printed.
 */

int	print_hex(va_list args, flag_t *fun)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (fun->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints a number in hexa base.
 * @args: va_list arguments.
 * @fun: pointer to the struct.
 * Return: bytes printed.
 */

int	print_hex_big(va_list args, flag_t *fun)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (fun->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - prints a number in binary.
 * @args: va_list arguments.
 * @fun: pointer to the struct.
 * Return: bytes printed.
 */

int	print_binary(va_list args, flag_t *fun)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 2, 0);

	(void)fun;
	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8.
 * @args: va_list arguments.
 * @fun: pointer to the struct.
 * Return: bytes printed.
 */
int	print_octal(va_list args, flag_t *fun)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (fun->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}

/**
 * convert - converts number into string.
 * @num: number to be converted.
 * @base: base.
 * @low: flag if hexa lowercase.
 * Return: pointer to new string.
 */

char	*convert(unsigned long int num, int base, int low)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (low)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

