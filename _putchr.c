#include "main.h"

/**
 * _putchr - prints characters
 * @z: char input par
 * Return: int
 */
int _putchr(char z)
{
        return write(1, &z, 1);
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
