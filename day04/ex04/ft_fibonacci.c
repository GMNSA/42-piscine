// Text File
// AUTHOR:   _who
// FILE:     ft_fibonacci.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 20:01:37
// MODIFIED: 2019-04-07 21:09:17

int     ft_fibonacci(int index)
{
    if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
