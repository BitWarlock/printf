#include "main.h"

/**
 * _putchar - prints a char
 * @c: char
 * @count: number of bytes printed.
 * Return: void.
 */
void	_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * print_str - prints a string.
 * @str: string to be printed.
 * @count: pointer to the character count.
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
	}
	else
	{
		while (*str)
		{
			_putchar(*str, count);
			str++;
		}
	}
}
