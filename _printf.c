#include "main.h"

/**
 * _printf - A clone of printf. It selects the correct function to print.
 * @format: The identifier to look for.
 * Return: The length of the string.
 */

int _printf(const char * const format, ...)
{
	con_match q[] = {
		{"%c", printchar},
		{"%s", printstr},
		{"%%", print_amb},
		{"%d", print_deci},
		{"%i", print_int},
		{"%p", printadds},
		{"%x", printhex},
		{"%X", printHEX}
	};

	va_list dots;
	int i = 0, len = 0, r;

	va_start(dots, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		r = 7;
		while (r >= 0)
		{
			if (q[r].identity[0] == format[i] && q[r].identity[1] == format[i + 1])
			{
				len += q[r].funct(dots);
				i = i + 2;
				goto Here;
			}
			r--;
		}
		putchar(format[i]);
		len++;
		i++;
	}
	va_end(dots);
	return (len);
}

