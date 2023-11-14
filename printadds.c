#include "main.h"

/**
 * printadds - This prints a pointer address ( hexgecimal number).
 * @dots: The arguments.
 * Return: counter.
 */

int printadds(va_list dots)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(dots, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	putchar('0');
	putchar('x');
	y = printhex_extra(x);
	return (y + 2);
}
