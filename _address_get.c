#include "main.h"

/**
 * prnt_addr - prints address of input in hexa format
 * @saf: va_list arguments
 * @l: pointer to the struct flags
 *
 * Return: no of chars printed
 */
int prnt_addr(va_list saf, flags_t *l)
{
	char *s;
	unsigned long int y = va_arg(saf, unsigned long int);
	int value = 0;

	(void)l;
	if (!y)
		return (pts("(nil)"));
	s = convert(y, 16, 1);
	value += pts("0x");
	value += pts(s);

	return (value);
}
/**
 * not_printablech - prints Non printable characters
 * @saf: va_list arguments
 * @l: pointer to the struct flags 
 * Return: no of chars printed
 */
int not_printablech(va_list saf, flags_t *l)
{
	int g = 0, char_val = 0;
	char *ls;
	char *str = va_arg(saf, char *);

	(void)l;
	if (!str)
		return (pts("null"));

	for (g = 0; str[g]; g++)
	{
		if (str[g] > 0 && (str[g] < 32 || str[g] >= 127))
		{
			pts("\\x");
			char_val += 2;
			ls = convert(str[g], 16, 0);
			if (!ls[1])
				char_val += putchr(48);
			char_val += pts(ls);
		}
		else
			char_val += putchr(str[g]);
	}
	return (char_val);
}
