#include "main.h"

/**
 * _putchar - Prints a char
 * @c: char
 * @Count: number of bytes printed.
 * Return: 1 if success, -1 if not.
 */
void	_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * print_str - prints a string.
 * @str: string to be printed.
 * @Count: Pointer to the character count.
 * Return: nothing.
 */

void	print_str(char *str, int *count)
{
	if (str == NULL)
	{
		char *s = "(null)";

		while (*s)
		{
			_putchar(*s, count);
			s++;
		}
		count += 6;
	}
	else
	{
		while (*str && str)
		{
			_putchar(*str, count);
			str++;
		}
	}
}
