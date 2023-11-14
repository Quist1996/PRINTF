#include "main.h"

/**
 * printstr- This prints a string.
 * @dots: The arguments
 * Return: The length of the string.
 */

int printstr(va_list dots)
{
	char *s;
	int index, len;

	s = va_arg(dots, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (index = 0; index < len; index++)
			putchar(s[index]);
		return (len);
	}
	else
	{
		len = strlen(s);
		for (index = 0; index < len; index++)
			putchar(s[index]);
		return (len);
	}
}
