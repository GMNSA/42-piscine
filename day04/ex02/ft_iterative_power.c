// Text File
// AUTHOR:   _who
// FILE:     ft_iterative_power.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 19:10:11
// MODIFIED: 2019-04-07 19:24:15

int     ft_iterative_power(int nb, int power)
{
    int                 i;
    unsigned int        temp;

    i = 0;
    temp = 1;
    if (power < 0)
        return (0);
    while (i < power)
    {
        temp *= nb;
        i += 1;
    }
    return (temp);
}
