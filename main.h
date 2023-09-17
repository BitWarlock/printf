#ifndef _MAIN_H_
#define _MAIN_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int	_printf(const char *format, ...);
void	_putchar(char c, int *count);
void	print_str(char *str, int *count);
void	putnbr(int n, int *count);
void	print_num_u(unsigned int n, int *count);
void	print_binary(int n, int *count);

#endif
