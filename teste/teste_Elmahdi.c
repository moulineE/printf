#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void _puts(char *str);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct sp
{
	char *sp;
	int (*f)(char);
} sp_t;

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
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */
int main(const char *format, ...)
{
	int i;
	char sp;

	for (i = 0; *(str + i) > 0; i++)
	{
		if (*(str + i) == %)
		{
			sp = *(str + i + 1)
		}
		_putchar(*(str + i));
	}

}
