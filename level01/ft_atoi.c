int	ft_atoi(const char *str)
{
    int i;
    int neg;
    int num;

    i = 0;
    neg = 1;
    num = 0;
    while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            neg = -1; 
            
        }
       i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        num = (num * 10) + (str[i] - 48);
        i++;
    }
    return(num * neg);
}
