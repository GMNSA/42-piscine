// Text File
// AUTHOR:   _who
// FILE:     ft_find_next_prime.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 00:44:27
// MODIFIED: 2019-04-09 01:37:57

int     check_prime(int nb)
{
    int     div;

    div = 2;
    if (nb == 2)
        return (1);
    else if (nb == 0 || nb == 1)
        return (0);

    while (nb % div != 0)
    {
        if (div == nb - 1)
            return (1);
        div += 1;
    }
    return (0);
}

int     ft_find_next_prime(int nb)
{
    int     sign;

    sign = 0;
    while (!sign)
    {
        sign = check_prime(nb);
        if (!sign)
            nb += 1;
    }
    return (nb);
}
