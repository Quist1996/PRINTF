#include "main.h"

/**
 * printchar - This prints a character.
 * @dots:The arguments.
 * Return: 1 on success.
 */

int printchar(va_list dots)
{
	char a = va_arg(dots, int);

	putchar(a);

	return (1);
}
