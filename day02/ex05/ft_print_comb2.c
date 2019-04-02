// C / C++
// AUTHOR:   _who
// FILE:     ft_print_comb2.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-02 14:57:12
// MODIFIED: 2019-04-02 17:58:00

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    display_number(int nbr)
{
    int     first;
    int     second;

    if (nbr <= 9)
    {
        ft_putchar('0');
        ft_putchar(nbr + '0');
    }
    else
    {
        first = nbr / 10;
        second  = nbr % 10;
        ft_putchar(first + '0');
        ft_putchar(second + '0');
    }
}

void    ft_print_comb2(void)
{
    int     i;
    int     j;

    i = 0;
    while (i < 99)
    {
        j = 1;
        while (j <= 99)
        {
            display_number(i);
            ft_putchar(' ');
            display_number(j);
            if (i < 98 || j < 99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            ++j;
        }
        ++i;
    }
}
