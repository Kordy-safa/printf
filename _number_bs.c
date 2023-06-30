#include "main.h"

char *convert(unsigned long int y, int bs, int lw_cs);

/**
 * _octal_int - Prints the numbers in octal base(base 8)
 * @saf: List of all the arguments
 * Return: int
 */
int _octal_int(va_list saf)
{
	unsigned int q = va_arg(saf, unsigned int);
	char *s = convert(q, 8, 0);
	int lng = 0;

	q = va_arg(saf, unsigned int);
	if (s[0] != '0')
		lng += _putchr('0');
	lng += _pts(s);

	return (lng);
}
/**
 * _binary_int - Converts a number from base 10 to binary
 * @saf: List of arguments passed
 * Return: int
 */
int _binary_int(__attribute__((unused))va_list saf)
{
	unsigned int x = va_arg(saf, unsigned int);
	char *s = convert(x, 2, 0);

	return (_pts(s));
}
/**
 * _heX_base - Prints decimal numbers on base16 Uppercase
 * @saf: List of the arguments
 * Return: No of chars printed
 */
int _heX_base(va_list saf)
{
	unsigned int q = va_arg(saf, unsigned int);
	char *s = convert(q, 16, 0);
	int lng = 0;

	if (s[0] != '0')
		lng += _pts("0X");
	lng += _pts(s);

	return (lng);
}
/**
 * hex_base - Prints decimal nos on base16 lowercase
 * @saf: List of the arguments
 * Return: No of chars printed
 */
int _hex_base(va_list saf)
{
	unsigned int q = va_arg(saf, unsigned int);
	char *s =  convert(q, 16, 1);
	int val = 0;

	if (s[0] != '0')
		val += _pts("0x");
	val += _pts(s);

	return (val);
}
/**
 * convert - converts integer and  their base into string
 * @y: input int parameter
 * @bs: input base
 * @lw_case: flag incase hexa values need to be lowercase
 * Return: string of chars
 */
char *convert(unsigned long int y, int bs, int lw_cs)
{
	char *c;
	static char *fx, buffer[50];

	fx = (lw_cs)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	c = &buffer[49];
	*c = '\0';
	do {
		*--c = fx[y % bs];
		y /= bs;
	} while (y != 0);

	return (c);
}
