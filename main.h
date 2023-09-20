#ifndef _MAIN_H_
#define _MAIN_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct flag - contaings _printf flags.
 * @hash: '#' flag.
 * @space: ' ' flag.
 * @plus: '+' flag.
 */

typedef struct	flag
{
	int	hash;
	int	space;
	int	plus;
} flag_t;

/**
 * struct handle - choosing right function.
 * @c: format specifier.
 * @fun: right function pointer.
 */

typedef struct	handle
{
	char	c;
	int	(*fun)(va_list args, flag_t *fun);
} handle_t;

/* Print numbers in different bases */
int print_int(va_list args, flag_t *fun);
int print_unsigned(va_list args, flag_t *fun);
int count_digit(int i);
int print_hex(va_list args, flag_t *fun);
int print_hex_big(va_list args, flag_t *fun);
int print_binary(va_list args, flag_t *fun);
int print_octal(va_list args, flag_t *fun);
void print_number(int n);

/* Print strings */
int print_string(va_list args, flag_t *fun);
int print_char(va_list args, flag_t *fun);
int _putchar(char c);
int _puts(char *str);

/* Print special cases */

char *convert(unsigned long int num, int base, int low);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flag_t *);
int get_flag(char s, flag_t *fun);

/* printsv */
int print_rot13(va_list args, flag_t *fun);
int print_rev(va_list args, flag_t *fun);
int print_bigS(va_list args, flag_t *fun);
int print_address(va_list args, flag_t *fun);
int print_percent(va_list args, flag_t *fun);

#endif
