// Text File
// AUTHOR:   _who
// FILE:     ft_rev_params.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-21 10:55:38
// MODIFIED: 2019-04-21 11:03:44

#include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);

int     main(int ac, char **av)
{
    int     n;

    if (ac == 1)
        return (0);
    n = ac - 1;
    while (n >= 1)
    {
        ft_putstr(av[n]);
        ft_putchar('\n');
        --n;
    }
    return(0);
}
