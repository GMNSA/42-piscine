// Text File
// AUTHOR:   _who
// FILE:     ft_recursive_factorial.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 18:42:05
// MODIFIED: 2019-04-07 19:08:34

#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
    int     i;
    int     temp;

    i = 1;
    temp = 1;
    if (nb == 2)
        return (2);
    else if (nb == 0 || nb == 1)
        return (1);
    while (temp < nb)
    {
        temp = temp * i;
        i += 1;
    }
    if (temp > nb)
        return (0);
    return (i - 1);
}
