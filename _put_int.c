#include "main.h"

/**
 * _put_int - function to %d & %i
 * @q: integer parameter
 * Return: int
 */
int _put_int(int q)
{
	int val = 0;

	if (q == 0)
	{
		return (1);
	}
	else if (q < 0)
	{
		val++;
		q = -q;
	}
	for (; q > 0; )
	{
		val++;
		q /= 10;
	}

	return (val);
}
