/* ft_swap.c */

#include "../includes/tools.h"

void    ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *b;
    *a = *a ^ *b;
}
