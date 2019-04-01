// Text File
// AUTHOR:   _who
// FILE:     ft_is_negative.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-01 16:25:03
// MODIFIED: 2019-04-01 16:28:02

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}
