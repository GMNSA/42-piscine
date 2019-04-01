// Text File
// AUTHOR:   _who
// FILE:     ft_print_numbers.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-01 16:20:20
// MODIFIED: 2019-04-01 16:23:53

#include <unistd.h>

# define END 9

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int     num;

    num = 0;
    while (num <= END)
    {
        ft_putchar(num + '0');
        num += 1;
    }
}
