#include <stdio.h>

int get_digit(char c, int str_base)
{
    int max_base = 0;

    if (str_base <= 10)
        max_base = str_base + '0';
    else
        max_base = str_base - 10 + 'a';

    if (c <= max_base && c >= '0' && c <= '9')
        return (c - '0');
    else if (c <= max_base && c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    else if (c <= max_base && c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else
        return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int neg = 1;
    int digit = 0;

    if (*str == '-')
    {
        neg = -1;
        str++;
    }

    while ((digit = get_digit(*str, str_base)) >= 0)
    {
        res = (res * str_base) + digit;
        str++;
    }
    return (res * neg);
}

int main(void)
{
    printf("%d", ft_atoi_base("esternocleidoyesascosas", 16));
}
