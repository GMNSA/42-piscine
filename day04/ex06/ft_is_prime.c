// Text File
// AUTHOR:   _who
// FILE:     ft_is_prime.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-08 01:46:04
// MODIFIED: 2019-04-09 00:41:00

int     ft_is_prime(int nb)
{
    int     divider;

    divider = 2;
    while (nb % 2 != 0)
    {
        if (divider >= nb)
            break ;
        divider += 1;
    }
    if (divider == nb)
        return (1);
    return (0);
}
