#include "main.h"
/**
 * print_int -This prints integers.
 * @dots:The arguments to print.
 * Return: integer
 */
int print_int(va_list dots)
{
	int n = va_arg(dots, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}

		putchar('0' + last);
		return (i);
	}
