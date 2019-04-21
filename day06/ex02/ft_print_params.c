// Text File
// AUTHOR:   _who
// FILE:     ft_print_params.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-21 10:44:13
// MODIFIED: 2019-04-21 10:51:01

#include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);

int     main(int ac, char **av)
{
    int     n;

    n = 0;
    if (ac == 4)
        while (n++ < 3)
        {
            ft_putstr(av[n]);
            ft_putchar('\n');
        }

    return (0);
}
