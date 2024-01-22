// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

// The strspn() function calculates the length (in bytes) of the 
// initial segment of s which consists entirely of bytes in accept

// The strspn() function returns the number of bytes in the initial segment 
// of s which consist only of bytes from accept.

#include <stdio.h>
#include <string.h>

int check(const char *accept, int c)
{
    while(*accept)
    {
        if(*accept == c)
            return(0);
        accept++;
    }
    return(1);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        if (check(accept, s[i]))
            break;
        i++;
    }
    return(i);
}

int main(void)
{
    char *c = "amparo";
    char *accept = "amparo empar";
    printf("%lu\n", ft_strspn(c, accept));
    printf("%lu\n", strspn(c, accept));
}
