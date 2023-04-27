#include"main.h"
/**
 * print_S - print a number in base 2
 * @ap: va list argument
 * Return: the number of char printed
 */
int print_S(va_list ap)
{
	int i, j, e, c = 0;
	char *str = va_arg(ap, char*);
	char *res;
	
	if (!str)
		return(NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			c = c + 2;
			res = convert_hex(str[i], 16, 0);
			if (!res[1])
			{
				c++;
				_putchar('0');
			}
			for (j = 0; str[j] != '\0'; j++)
			{
				_putchar(res[i]);
				c++;
			}
		}
		else
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}
