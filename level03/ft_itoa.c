#include <stdlib.h>

int numlen(int number)
{
    int len = 0;

    if(number == 0)
        return(1);
    if(number < 0)
    {
        number = -number;
        len++;
    }

    while(number != 0)
    {
        number /= 10;
        len++;
    }
    return(len);
}

char	*ft_itoa(int nbr)
{
    int len = numlen(nbr);

    char *res = malloc(sizeof(char) * (len + 1));
    res[len] = '\0';

    if(nbr == 0)
        res[0] = '0';
    if(nbr < 0)
    {
        nbr = -nbr;
        res[0] = '-';
    }
    while(len && nbr)
    {
        res[len - 1] = nbr % 10 + '0';
        nbr /= 10;
        len--;
    }
    return(res);
}

#include <stdio.h>

int main(void)
{
    int n = 35;

    printf("%s", ft_itoa(n));
}