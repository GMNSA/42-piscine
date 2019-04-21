/* ft_putstr.c */

#include "../includes/tools.h"

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}
