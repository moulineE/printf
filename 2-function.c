#include"main.h"

int printchar(va_list ap);
int _strlen(char *s);
int printf_string(va_list ap);
int _putchar(char c);

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

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
