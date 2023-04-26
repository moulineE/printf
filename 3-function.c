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
	char *str = convert(num, 2);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * PrintOctal - prints a number in base 8
 * @ap: list of arguments
 * Return: the number of char printed
 */
int PrintOctal(va_list ap)
{
	int i;
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 8);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_unsigned - prints an unsigned integer
 * @ap: va_list of arguments from _printf
 * Return: number of char printed
 */
int print_unsigned(va_list ap)
{
	int i;
	unsigned int u = va_arg(ap, unsigned int);
	char *str = convert(u, 10);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * Return: result string
 */
char *convert(unsigned long int num, int base)
{
	static char buffer[32];
	char *ptr;

	ptr = &buffer[31];
	*ptr = '\0';
	do {
		ptr--;
		*ptr = num % base + '0';
		num /= base;
	} while (num != 0);

	return (ptr);
}
