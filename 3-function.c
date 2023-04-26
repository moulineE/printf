#include"main.h"
/**
 * PrintBinary - print a number in base 2
 * @ap: va list argument
 * Return: the number of char printed
 */

int PrintBinary(va_list ap)
{
	int i;
	unsigned int num = va_arg(ap, unsigned int);
	char *str;
	static char buffer[32];

	str = &buffer[32];
	*str = '\0';
	do {
		*str-- = num %  2;
		num = num / 2;

	} while (num != 0);
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
