#include "main.h"

/**
 * _putchr - writes a character to the standard output
 * @z: character to be written
 * Return: On success, returns the number of characters written.
 * On error, returns -1.
 */
int _putchr(char z)
{
	static char buf[1024];
	static int x;

	if (z == -1 || x >= 1024)
	{
		write(1, &buf, x);
		x = 0;
	}
	if (x != -1)
	{
		buf[x] = z;
		x++;
	}
	return (1);
}

/**
 * _pts - prints a string to stdout
 * @s: pointer to the string to print
 * Return: number of chars written
 */
int _pts(char *s)
{
	register int x = 0;

	for (; s[x] != '\0'; x++)
		_putchr(s[x]);
	
	return (x);
}
