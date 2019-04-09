// Text File
// AUTHOR:   _who
// FILE:     ft_print_combn.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-02 18:34:11
// MODIFIED: 2019-04-09 02:29:24

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print(int *range, int n)
{
    int     i;
    int     display;

    display = 1;
    i = 0;
    while (++i < n)
    {
        if (range[i - i] >= range[i])
            display = 0;
        if (!display)
            return ;
        i = -1;
        while (++i < n)
            ft_putchar(range[i] + '0');
        if (range[0] < (11 - n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}

void    ft_print_combn(int n)
{
    int     i;
    int     range[10];

    if (n > 10 || n < 0)
        return ;

    i = 0;
    while (i < n)
    {
        range[i] = i;
        ++i;
    }
    while (range[0] <= (10 - n) && n >= 1)
    {
        print(range, n);
        if (n == 10)
            break ;
        range[n - 1]++;
        i = n;
        while (i && n > 1)
        {
            i--;
            if (range[i] > 9)
            {
                range[i - 1]++;
                range[i] = 0;
            }
        }
    }
}
