#include "main.h"

/**
 * _memcpy - copy memory area
 * @src: Source to copy from
 * @dest: Destination for copying
 * @n: number of bytes to copy
 * Return: cahr pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int x)
{
	unsigned int d = 0;

	for (; d < x; d++)
		dest[d] = src[d];
	dest[d] = '\0';

	return (dest);
}
/**
 * _stdout_str - chars on standard output written
 * @s: String  parameter passed
 * Return: void
 */
void _stdout_str(char *s)
{
	int d = 0;

	for (; s[d] != '\0'; d++)
		_putchr(s[d]);
}
/**
 * str_rev - reverses a string
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *str_rev(char *s)
{
	int lng = 0, fx = 0;
	char tmp, *dest;

	while (s[lng] != '\0')
		lng++;

	dest = malloc(sizeof(char) * lng + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, lng++);
	
	for (; fx < lng; fx++, lng--)
	{
		tmp = dest[lng - 1];
		dest[lng - 1] = dest[fx];
		dest[fx] = tmp;
	}
	return (dest);
}

/**
 * _cal_oct_num - Calculates the length for an octal number
 * @x: The number for which the length is being calculated
 * @b: Base to be computed by
 * Return: An integer (the length of a number)
 */
unsigned int _cal_oct_num(unsigned int x, int b)
{
	unsigned int d = 0;

	for (; x > 0; d++)
	{
		x = x / b;
	}
	return (d);
}
