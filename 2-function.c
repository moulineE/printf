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
	_putchar(s);
	return (1);
}
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * printf_string - print a string.
 * @ap: argumen t.
 * Return: the length of the string.
 */
int printf_string(va_list ap)
{
	char *s;
	int i, len;

	s = va_arg(ap, char *);

	if (s != NULL)
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
	}
	return (len);
}
