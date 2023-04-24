#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	int i;
	int r = 0;
	int tempr;
	char sp;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format > 0; i++)
	{
		tempr = 0;
		if (format[i] == '%')
		{
			sp = format[i + 1];
			tempr = get-func(sp)(ap);
			if (tempr == NULL)
			{
				_purchar(format[i]);
				_putchar(format[i + 1]);
				r = r + 2;
			}
			else
			{
				r = tempr + r;
			}
			i = i + 2;
		}
		_putchar(format[i]);
		r++;
	}
	va_end(ap);
	return (r);
}
