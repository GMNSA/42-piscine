/* ft_ultimate_range.c */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *range;
    int     i;

    if (!(range = (int *)malloc(sizeof(range) * (max - min))))
        return (NULL);
    i = 0;
    while (min < max)
    {
        range[i] = min;
        ++i;
        ++min;
    }
    return (range);
}

int     ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
        return (0);
    *range = ft_range(min, max);
    return (max - min);
}
