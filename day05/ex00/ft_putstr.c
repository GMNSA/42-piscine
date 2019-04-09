// Text File
// AUTHOR:   _who
// FILE:     ft_putstr.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 02:34:52
// MODIFIED: 2019-04-09 02:36:58

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}
