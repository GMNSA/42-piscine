// Text File
// AUTHOR:   _who
// FILE:     ft_strncmp.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 20:33:07
// MODIFIED: 2019-04-09 20:45:03

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int     i;

    i = 0;
    while (s1[i] && s2[i] && n != 0)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        n--;
        i += 1;
    }
    return (0);
}
