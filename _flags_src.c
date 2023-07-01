#include "main.h"

/**
 * _flag_src - inniate flags incase _printf finds
 * a flag modifier in the format string
 * @y: char parameter that holds the flag specifier
 * @l: pointer to the struct flags
 *
 * Return: 1 if a flag is initiated, 0 otherwise
 */
int flag_src(char y, flags_t *l)
{
	int x = 0;

	switch (y)
	{
		case '+':
			l->ds = 1;
			x = 1;
			break;
		case ' ':
			l->cf = 1;
			x = 1;
			break;
		case '#':
			l->kt = 1;
			x = 1;
			break;
	}
	
	return (x);
}
