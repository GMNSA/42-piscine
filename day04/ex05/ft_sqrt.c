// Text File
// AUTHOR:   _who
// FILE:     ft_sqrt.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 21:16:33
// MODIFIED: 2019-04-08 01:44:17

int     ft_sqrt(int nb)
{
    int     i;

    i = 2;
    if (nb <= 0)
        return (0);
    while (i < nb)
    {
        if (nb % i == 0)
            return (i);
        i += 1;
    }
    return (0);
}
