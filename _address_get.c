#include "main.h"

/**
 * _prnt_addr - prints address of input in hexa format
 * @saf: va_list arguments
 * @l: pointer to the struct flags
 *
 * Return: no of chars printed
 */
int _prnt_addr(va_list saf, flags_t *l)
{
	char *s;
	unsigned long int y = va_arg(l, unsigned long int);
	int value = 0;

	(void)l;
	if (!y)
		return (_pts("(nil)"));
	s = convert(p, 16, 1);
	value += _pts("0x");
	value += _pts(s);

	return (value);
}
/**
 * _not_printablech - prints Non printable characters
 * @saf: va_list arguments
 * @l: pointer to the struct flags 
 * Return: no of chars printed
 */
int _not_printablech(va_list saf, flags_t *l)
{
	int g = 0, char_val = 0;
	char *ls;
	char *str = va_arg(saf, char *);

	(void)l;
	if (!str)
		return (_pts("null"));

	for (g = 0; str[g]; g++)
	{
		if (str[g] > 0 && (str[g] < 32 || str[g] >= 127))
		{
			_pts("\\x");
			char += 2;
			ls = convert(str[i], 16, 0);
			if (!ls[1])
				char_val += _putchr(48);
			char_val += _pts(ls);
		}
		else
			char_val += _putchr(str[g]);
	}
	return (char_val);
}
