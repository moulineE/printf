#include"main.h"
int print_S(va_list ap)
{
	int i, c = 0;
	char *str = va_arg(ap, char*);
	char *res;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i]; i++)
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
			for (i = 0; str[i] != '\0'; i++)
			{
				_putchar(str[i]);
				c++;
			}	
		}
		else
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);



}