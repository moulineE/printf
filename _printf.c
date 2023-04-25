#include "main.h"
/**
 * _printf - produces output according to printf format
 * @format: the string to print
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int r = 0;
	int tempr;
	char sp[2] = {'\0', '\0'};
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		tempr = 0;
		if (format[i] == '%')
		{
			if ((format[i + 1] == 0) && (format[i - 1] != '%' || i == 0))
			{
				return (-1);
			}
			sp[0] = format[i + 1];
			tempr = getfunc(sp, ap);
			if (tempr == 0)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				r = r + 2;
			}
			else
			{
				r = tempr + r;
			}
			i = i + 2;
		}
		if (format[i] != '\0')
		{
			_putchar(format[i]);
			r++;
		}
	}
	va_end(ap);
	return (r);
}
