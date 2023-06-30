#include "main.h"

/**
 * _char_cons - Prints character
 * @saf: list of arguments
 * @l: pointer to the struct flags
 * Return: Will return the amount of characters printed.
 */
int _char_cons(va_list saf, flags_t *l)
{
	(void)l;
	_putchr(va_arg(saf, int));
	return (1);
}

/**
 * _string_cons - Prints a string
 * @saf: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _string_cons(va_list saf,__attribute__((unused))flags_t *l)
{
	char *s = va_arg(saf, char *);

	if (!s)
		s = "null";

	return (_putchr(s);

}
/**
 * _puts_percent - Prints a percent symbol
 * @saf: list of arguments
 * Return: no of characters printed.
 */
int _puts_percent(__attribute__((unused))va_list saf, flags_t *l)
{
(void)l;
_putchr('%');
return (1);
}

/**
 * _put_int - Prints an integer
 * @saf: list of arguments
 * Return: no of characters printed.
 */
int _put_num(va_list saf, flags_t *l)
{
	int q = va_arg(l, int);
	int fix = _int_cnt(q);

	if (l->cf == 1 && l->ds == 0 && q >= 0)
		fix += _putchr(' ');
	if (l->ds == 1 && d >= 0)
		fix += _putchr('+');
	if (q <= 0)
		fix++;
	print_number(n);
	return (fix);
}

/**
 * unsigned_int_par - Prints Unsigned integers
 * @saf: List of all of the argumets
 * Return: no of counts
 */
int _unsigned_num_par(va_list saf, flags_t *l)
{
	unsigned int x = va_arg(saf, int);
	char *s = convert(x, 10, 0);

	(void)l;
	return (_pts(s));
}
