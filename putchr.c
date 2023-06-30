#include "main.h"

/**
<<<<<<< HEAD
 * _putchr - prints characters
 * @z: char input par
 * Return: int
=======
 * _putchr - writes a character to the standard output
 * @z: character to be written
 * Return: On success, returns the number of characters written.
 * On error, returns -1.
>>>>>>> 2b4ff603db66229847d4bf63bc257423409b8f65
 */
int _putchr(char z)
{
	return (write(1, &z, 1));
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
