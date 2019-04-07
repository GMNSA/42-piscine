// Text File
// AUTHOR:   _who
// FILE:     ft_recursive_power.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 19:29:57
// MODIFIED: 2019-04-07 19:56:59

int     ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    else if (power == 1)
        return (nb);
    return nb * ft_recursive_power(nb, power - 1);
}
