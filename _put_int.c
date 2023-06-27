#include "main.h"

int _put_int(int j)
{
               int n, s_val = 0;

                 if (j == 0)
			 return (0);
                                else
                                                        n = j/10;
                                       s_val += 1;
                                                _put_int(n);
                                                      _putchr (j%10 + 48);
                                                                   
							      return (s_val);
}
