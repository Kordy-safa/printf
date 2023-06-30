#include "main.h"

/**
 * _put_int - function to %d, %i when unsigned
 * @x: unsigned integer parameter
 * Return: int (count of nos printed)
 */
int _put_unsigned_int(unsigned int q)
{
	int lng = 0, val = 1;
	unsigned int x;

	x = q;
	while (x / val > 9)
		val *= 10;

	while (val != 0)
	{
		lng += _putchr(48 + x / val);
		x %= val;
		val /= 10;
	}

	return (lng);
}

/**
 * _put_int - function to %d, %i when unsigned
 * @saf: list of arguments
 * Return: int (count of nos printed)
 */
int _put_int(va_list saf)
{
	int q, lng = 0, val = 1;
	unsigned int x;

	q = va_arg(saf, int);
	if (q <= 0)
		x = q;
	else
	{
		lng += _putchr('-');
		x = q * -1;
	}
	
	while (val != 0)
	{
		lng += _putchr(48 + x / val);
		x %= val;
		val /= 10;
	}

	return (lng);
}
