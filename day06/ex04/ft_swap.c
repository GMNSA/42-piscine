/* ft_swap.c */

#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}
