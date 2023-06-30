#include "main.h"

/**
 * _char_cons - Prints character
 * @saf: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _char_cons(va_list saf)
{
	_putchr(va_arg(saf, int));
	return (1);
}

/**
 * _string_cons - Prints a string
 * @saf: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _string_cons(va_list saf)
{
	int x = 0;
	char *s;

	s = va_arg(saf, char *);
	if (s == NULL)
		s = "null";
	for (; s[x] != '\0'; x++)
		_putchr(s[x]);

	return (x);
}
/**
 * _puts_percent - Prints a percent symbol
 * @saf: list of arguments
 * Return: no of characters printed.
 */
int _puts_percent(__attribute__((unused))va_list saf)
{
	_putchr('%');
	return (1);
}

/**
 * _put_int - Prints an integer
 * @saf: list of arguments
 * Return: no of characters printed.
 */
int _put_num(va_list saf)
{
	int no_lng;

	no_lng = _put_int(saf);
	return (no_lng);
}
/**
 * unsigned_int_par - Prints Unsigned integers
 * @saf: List of all of the argumets
 * Return: no of counts
 */
int _unsigned_num_par(va_list saf)
{
	unsigned int y;

	y = va_arg(saf, unsigned int);

	if (y == 0)
		return (_put_unsigned_int((y)));

	if (y < 1)
		return (-1);

	return (_put_unsigned_int((y)));
}
