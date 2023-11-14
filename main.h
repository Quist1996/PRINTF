#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct format - This matches the conversion specifiers for printf
 * @identity: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @funct: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *identity;
	int (*funct)();
} con_match;

int _printf(const char *format, ...);
int printchar(va_list dots);
int printstr(va_list dots);
int print_amb(void);
int print_deci(va_list dots);
int print_int(va_list dots);
int _strlen(char *s);
int _putchar(char c);
int printadds(va_list dots);
int printhex_extra(unsigned long int num);
int printhex(va_list dots);
int printHEX(va_list dots);
int printHEX_extra(unsigned int num);


#endif
