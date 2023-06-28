#include "main.h"

/**
 * _putchr - writes a character to the standard output
 * @z: character to be written
 * Return: On success, returns the number of characters written.
 * On error, returns -1.
 */
int _putchr(char z)
{
	return (write(1, &z, 1));
}
