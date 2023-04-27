#include"main.h"
/**
 * print_S - print a number in base 2
 * @ap: va list argument
 * Return: the number of char printed
 */
int print_S(va_list ap)
{
	int i, c = 0;
	char *str = va_arg(ap, char*);
	char *res;

	if (!str)
		return ("(null)");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			c = c + 2;
			res = convert_hex(str[i], 16, 0);
			if (!res[1])
			{
				c++;
				_putchar('0');
			}
				c = c + _puts(res);
		}
		else
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}
