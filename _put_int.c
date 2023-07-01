#include "main.h"

/**
 * put_int - function to %d, %i when unsigned
 * @x: unsigned integer parameter
 * Return: int (count of nos printed)
 */
int put_unsigned_int(unsigned int q)
{
	int lng = 0, val = 1;
	unsigned int x;

	x = q;
	while (x / val > 9)
		val *= 10;

	while (val != 0)
	{
		lng += putchr(48 + x / val);
		x %= val;
		val /= 10;
	}

	return (lng);
}

/**
 * put_int - function to %d, %i when unsigned
 * @x: integer
 * Return: numbers of char
 */
int put_int(int x)
{
	unsigned int x1;

	if (x < 0)
	{
		putchr('-');
		x1 = -x;
	}
	else
		x1 = x;

	if (x1 / 10)
		put_int(x1 / 10);
	putchr((48 + (x1 % 10)));
}

/**
 * int_count - returns the no of digits in an int
 * @d: integer to evaluate
 * Return: number of digits
 */
int int_count(int d)
{
	unsigned int x = 0;
	unsigned int y;

	if (d < 0)
		y = d * -1;
	else
		y = x;
	while (y != 0)
	{
		y /= 10;
		x++;
	}
	return (x);
}
