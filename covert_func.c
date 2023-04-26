#include"main.h"
/**
 * convert_hex - convert into string
 * @num: input number
 * @base: inpute base
 * @l: flag if hexa value need to be lower case
 * Return: String
 */
char *convert_hex(unsigned long int num, int base, int l)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (l)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		ptr--;
		*ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
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
