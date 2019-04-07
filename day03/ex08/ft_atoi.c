// Text File
// AUTHOR:   _who
// FILE:     ft_atoi.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 17:06:58
// MODIFIED: 2019-04-07 17:29:02

int     ft_atoi(char *str)
{
    int     sign;
    int     res;

    sign = 1;
    res = 0;
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        sign = (*str == '-' ? -1 : 1);
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = (res * 10) + (*str - '0');
        str++;
    }
    return ((int)res * sign);
}
