// Text File
// AUTHOR:   _who
// FILE:     ft_print_comb.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-01 20:31:37
// MODIFIED: 2019-04-02 14:55:34

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int     first;
    int     second;
    int     third;

    first = -1;
    while (first++ <= 9)
    {
        second = first;
        while (second++ <= 9)
        {
            third = second + 1;
            while (third <= 9)
            {
                ft_putchar(first + '0');
                ft_putchar(second + '0');
                ft_putchar(third + '0');
                if (first != 7 || second != 8 || third != 9)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                third++;
            }
        }
    }
    ft_putchar('\n');
}
