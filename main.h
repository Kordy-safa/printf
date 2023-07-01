#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
 *struct flags - struct containing flags to initiated
 * incase a flag specifier is passed to _printf()
 * @ds: flag for the '+' character
 * @cf: flag for the ' ' character
 * @kt: flag for the '#' character
 */
typedef struct flags
{
	  int ds;
	  int cf;
	  int kt;
} flags_t;
/**
 * convert_t - defines  structure for fuctions and symbols
 *
 * @y: the operator
 * @f: the function associated
 */
typedef struct convert_t {
       char *y;
       int(*l) (va_list saf, flags_t *l);
} convert_t;

int printf(const char *format, ...);
int flag_src(char y, flags_t *l);
int (*function_imp( char *str))(va_list, flags_t *);
int reverse_str(va_list saf, flags_t *l);
int rot13(va_list saf,__attribute__((unused))flags_t *l);
char *convert(unsigned long int y, int bs, int lw_cs);
int hx_base(flags_t *l, va_list saf);
int heX_base(va_list saf, flags_t *l);
int int_bin(va_list saf,__attribute__((unused))flags_t *l);
int octal_int(va_list saf, flags_t *l);
int not_printablech(va_list saf, flags_t *l);
int prnt_addr(va_list saf, flags_t *l);
int put_unsigned_int(unsigned int q);
int put_int(int x);
int put_num(va_list saf, flags_t *l);
int unsigned_num_par(va_list saf, flags_t *l);
int puts_percent(__attribute__((unused))va_list saf, flags_t *l);
int string_cons(va_list saf,__attribute__((unused))flags_t *l);
int char_cons(va_list saf, flags_t *l);
int pts(char *s);
int putchr(char);
char *str_rev(char *s);
void stdout_str(char *s);
int int_count(int d);

#endif
