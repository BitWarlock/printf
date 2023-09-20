#include "main.h"

/**
 * get_flag - checks for flags in _printf.
 * @c: flag specifier.
 * @fun: pointer to the struct flag.
 * Return: 1 if there's a flag, otherwise 0.
 */

int	get_flag(char c, flag_t *fun)
{
	int i = 0;

	switch (c)
	{
		case '+':
			fun->plus = 1;
			i = 1;
			break;
		case ' ':
			fun->space = 1;
			i = 1;
			break;
		case '#':
			fun->hash = 1;
			i = 1;
			break;
	}

	return (i);
}

/**
 * get_print - selects the right function for the specifier.
 * @c: character conversion specifier.
 * Return: a pointer to the right function.
 */

int	(*get_print(char c))(va_list, flag_t *)
{
	handle_t func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == c)
			return (func_arr[i].fun);
	return (NULL);
}

