#include "main.h"

int putform(char a, char b);

/**
 * _printf - produces output according to printf format
 * @format: the string to print
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, tempr, r = 0;
	char sp[2] = {'\0', '\0'};
	va_list ap;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		tempr = 0;
		if (format[i] == '%')
		{
			sp[0] = format[i + 1];
			if ((sp[0] == '\0'))
			{
				return (-1);
			}
			tempr = getfunc(sp, ap);
			if (tempr == 0)
			{
				putform(format[i], format[i + 1]);
				r = r + 2;
				while (format[i + 1] == 32 && format[i + 2] == 32)
				{
					i++;
				}
			}
			else
			{
				r = tempr + r;
			}
			i = i + 2;
		}
		if (format[i] != '\0' && format[i] != '%')
		{
			_putchar(format[i]);
			r++;
			i++;
		}
	}
	va_end(ap);
	return (r);
}
/**
 * putform - puts forme[i] and forme [i + 1]
 * @a: the 1st forme char
 * @b: the second form char
 *
 * Return: 0 success
 */
int putform(char a, char b)
{
	_putchar(a);
	_putchar(b);
	return (0);
}
