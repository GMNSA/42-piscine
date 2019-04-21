// Text File
// AUTHOR:   _who
// FILE:     ft_print_program_name.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-21 10:36:24
// MODIFIED: 2019-04-21 10:39:08

void    ft_putchar(char c);
void    ft_putstr(char *str);

int     main(int ac, char **av)
{
    if (ac == 1)
        ft_putstr(av[0]);
    return (0);
}
