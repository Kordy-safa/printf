#include "main.h"

/**
 * reverse_str - function to reverse a string
 * @saf: list of arguments
 * Return: int
 */
int reverse_str(va_list saf, flags_t *l) 
{
	int x = 0, y;
	char *p = va_arg(saf, char *);

	(void)l;
	if (!p)
		p = "null";

	while (p[x])
		x++;

	for((y = x - 1); y >= 0; y--)
		putchr(p[y]);

	return (x);
}

/**
 * rot13 - convects string to rot 13
 * @saf: list of arguments
 * Return: int
 */
int rot13(va_list saf,__attribute__((unused))flags_t *l)
{
	char *s;
	int x = 0, y = 0;
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	s = va_arg(saf, char *);
	if (s == NULL)
		return (-1);

	for (; s[x] != '\0'; x++)
	{
		for (; y <= 52; y++)
		{
			if (s[x] == b[y])
			{
				putchr(a[y]);
				break;
			}
			if (y == 53)
			putchr(s[x]);
		}
	}

	return (x);
}
