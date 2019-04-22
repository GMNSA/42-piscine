/* ft_sort_params.c */

#include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_swap(int *a, int *b);
int     ft_strcmp(char *s1, char *s2);

/*
 * Function: filling_array.
 * Arguments: (*array) - array that will fill.
 *            (len)    - array length.
 * Description: Array filling.
 * return: (void)
 * */
void    filling_array(int   *array, int  len)
{
    int     i;

    i = 0;
    while (i < len)
    {
        array[i] = i;
        ++i;
    }
}

/*
 * Function: find_min.
 * Arguments: char (**string) - Two-dimensional array with strings.
 *            int (*box)      - Array with numbers which we will arrange.
 *            int (len)       - array '**string' length.
 *            int (*i)        - cycle start.
 *
 * Description: We look for the minimum argument according to 
 *              the table ascii.
 * */
void     find_min(char **string, int *box, int len, int *i)
{
    int     a;

    a = *i;
    while (a < len)
    {
        if (ft_strcmp(string[box[*i]], string[box[a]]) > 0)
            ft_swap(&box[*i], &box[a]);
        ++a;
    }
}

int     main(int ac, char **av)
{
    int     box[ac];
    int     i;

    if (ac == 1)
        return (0);

    filling_array(box, ac);

    i = 1;
    while (i < ac)
    {
        find_min(av, box, ac, &i);
        ft_putstr(av[box[i++]]);
        ft_putchar('\n');
    }
    return (0);
}
