/* ft_ranger.c */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *num;
    int     i;

    if (min >= max)
    {
        num = &min;
        return (num);
    }
    if (!(num = (int*)malloc((sizeof(num) * (max - min)))))
        return (0);
    i = 0;
    while (min < max)
    {
        num[i] = min;
        ++i;
        ++min;
    }
    return (num);
}
