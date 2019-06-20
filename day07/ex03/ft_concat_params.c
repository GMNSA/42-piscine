/* ft_concat_params.c */

#include <stdlib.h>

int     ft_strlen(char *str);
char    *ft_mod_strlcat(char *dest, const char *source, unsigned size);
char    *ft_concat_params(int argc, char **argv);

// ----------------------------------------------------------------------

char    *ft_concat_params(int argc, char **argv)
{
    int     i;
    int     size;
    int     full_size;
    char    *temp;

    i = 1;
    size = 0;
    if (argc > 1)
    {
        while (i < argc)
        {
            size += ft_strlen(argv[i]);
            ++i;
        }
    }
    full_size = (size + argc);
    if (!(temp = (char *)malloc(sizeof(temp) * full_size)))
        return (NULL);
    i = 1;
    while (i < argc)
    {
        ft_mod_strlcat(temp, argv[i], full_size);
        ++i;
    }
    return (temp);
}

// ----------------------------------------------------------------------

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        ++i;
    return (i);
}

// ----------------------------------------------------------------------

char    *ft_mod_strlcat(char *dest, const char *source, unsigned size)
{ 
    int     i;
    int     j;

    i = 0;
    while (dest[i])
        ++i;

    j = 0;
    while ((dest[i] = source[j]) != '\0' && size > 0)
    {
        ++i;
        ++j;
        --size;
    }
    dest[i] = '\n';
    dest[i + 1] = '\0';
    return (dest);
}
