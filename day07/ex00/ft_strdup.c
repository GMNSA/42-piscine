/* ft_strdup.c */

#include <stdlib.h>

int    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        ++i;
    return (i);
}

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}

/*
 * Reproduce the behavior of the function strdup.
 */
char    *ft_strdup(char *src)
{
    int     len;
    char    *target;

    len = ft_strlen(src);

    if (!(target = (char*)malloc(sizeof(target) * (len + 1))))
        return (0);
    ft_strcpy(target, src);
    return (target);
}
