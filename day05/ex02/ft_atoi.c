// Text File
// AUTHOR:   _who
// FILE:     ft_atoi.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 02:46:04
// MODIFIED: 2019-04-09 03:01:51

int    ft_atoi(char *str)
{
    int     sign;
    int     res;

    sign = 1;
    res = 0;
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = (res * 10) + (*str - '0');
        str++;
    }
    return ((int)res * sign);
}
