#include "main.h"

/**
 * char_cons - Prints character
 * @saf: list of arguments
 * @l: pointer to the struct flags
 * Return: Will return the amount of characters printed.
 */
int char_cons(va_list saf, flags_t *l)
{
	(void)l;
	putchr(va_arg(saf, int));
	return (1);
}

/**
 * string_cons - Prints a string
 * @saf: list of arguments
 * Return: Will return the amount of characters printed.
 */
int string_cons(va_list saf,__attribute__((unused))flags_t *l)
{
	char *s = va_arg(saf, char *);

	if (!s)
		s = "null";

	return (putchr(*s));

}
/**
 * puts_percent - Prints a percent symbol
 * @saf: list of arguments
 * Return: no of characters printed.
 */
int puts_percent(__attribute__((unused))va_list saf, flags_t *l)
{
	(void)l;
	putchr('%');
	return (1);
}

/**
 * put_int - Prints an integer
 * @saf: list of arguments
 * Return: no of characters printed.
 */
int put_num(va_list saf, flags_t *l)
{
	int q = va_arg(saf, int);
	int fix = int_count(q);

	if (l->cf == 1 && l->ds == 0 && q >= 0)
		fix += putchr(' ');
	if (l->ds == 1 && q >= 0)
		fix += putchr('+');
	if (q <= 0)
		fix++;
	put_int(q);
	return (fix);
}

/**
 * unsigned_int_par - Prints Unsigned integers
 * @saf: List of all of the argumets
 * Return: no of counts
 */
int unsigned_num_par(va_list saf, flags_t *l)
{
	unsigned int x = va_arg(saf, int);
	char *s = convert(x, 10, 0);

	(void)l;
	return (pts(s));
}
