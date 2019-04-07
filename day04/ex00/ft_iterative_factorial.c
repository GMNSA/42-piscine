// Text File
// AUTHOR:   _who
// FILE:     ft_iterative_factorial.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 17:59:45
// MODIFIED: 2019-04-07 18:38:59

int     ft_iterative_factorial(int nb)
{
    int     i; 
    int     temp;

    i = 2;
    temp = 1;
    if (nb == 2)
        return (2);
    else if (nb < 0)
        return (0);
    while (i <= nb)
    {
        temp = i * temp;
        i += 1;
    }
    return (temp);
}
