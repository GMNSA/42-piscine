// Text File
// AUTHOR:   _who
// FILE:     ft_print_numbers.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 15:49:11
// MODIFIED: 2019-04-07 16:05:02

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int     num;

    num = 0;
    while (num < 10)
    {
        ft_putchar(num + '0');
        num += 1;
    }
}
