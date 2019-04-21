/* ft_putchar.c */

#include "../includes/tools.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
