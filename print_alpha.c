#include "main.h"

/**
 * _putchar - prints a char
 * @c: char
 * Return: 1 if success, -1 if not.
 */
int	_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - prints a string.
 * @str: string to be printed.
 * @count: Pointer to the character count.
 * Return: nothing.
 */

void	print_str(const char *str, int *count)
{
	while (*str)
	{
		_putchar(*str);
		(*count)++;
		str++;
	}
}
