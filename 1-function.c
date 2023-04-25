#include"main.h"

int putdigit(va_list ap);
int putint(va_list ap);
int put2sp(void);

/**
 * putdigit - printf decimal
 * @ap: list of arguments
 * Return: umber of characters printed
 */

int putdigit(va_list ap)
{
	int n, num, i, exp;
	int last, digit;

	i = 1;
	exp = 1;
	n = va_arg(ap, int);
	last = n % 10;
	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
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
			num = num % 10;
		}
		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = digit % exp;
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * putint - prints integer
 * @ap: argument to print
 * Return: number of characters printed
 */
int putint(va_list ap)
{
	int n, num, i, exp;
	int last, digit;

	i = 1;
	exp = 1;
	n = va_arg(ap, int);
	last = n % 10;
	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
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
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * put2sp - prints the char 37.
 * Return: 1.
 */
int put2sp(void)
{
	_putchar(37);
	return (1);
}
