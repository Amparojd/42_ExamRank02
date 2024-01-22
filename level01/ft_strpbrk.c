// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

// DESCRIPTION        

//        The strpbrk() function locates the first occurrence in the string
//        s of any of the bytes in the string accept.
// RETURN VALUE        

//        The strpbrk() function returns a pointer to the byte in s that
//        matches one of the bytes in accept, or NULL if no such byte is
//        found.

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    if(!*s1 || !*s2)
        return(0);
    
    int i = 0;
    while (*s1)
    {
        while(s2[i])
        {
            if(*s1 == s2[i])
                return((char *) s1);
            i++;
        }
        s1++;
    }
    return(0);
}

int main(void)
{
    char *a = "hola";
    char *b = "hola";

    printf("%s\n", ft_strpbrk(a, b));
    printf("%s\n", strpbrk(a, b));
}