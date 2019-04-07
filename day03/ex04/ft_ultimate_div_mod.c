// Text File
// AUTHOR:   _who
// FILE:     ft_ultimate_div_mod.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 16:29:06
// MODIFIED: 2019-04-07 16:39:42

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp_a;
    int temp_b;

    temp_a = *a / *b;
    temp_b = *a % *b;

    *a = temp_a;
    *b = temp_b;
}
