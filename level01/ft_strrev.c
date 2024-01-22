// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);


char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char aux;

    while(str[len])
        len++;
    
    while(i < len / 2)
    {
        aux = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = aux;
        i++;
    }
    return(str);
}
#include <stdio.h>


int main(void)
{
    char a[] = "hola";

    printf("%s\n", ft_strrev(a));
}

