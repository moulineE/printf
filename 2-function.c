#include"main.h"
/**
 * printchar - prints a char.
 * @ap: list of arguments
 * Return: 1.
 */

int printchar(va_list ap)
{
	int s;

	s = va_arg(ap, int);
	/*
	 * va_arg(ap, int) can convert a char to an int with an ASCII value
	 */
	_putchar(s);
	return (1);
}

