#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int len = 0;
	while (src[len])
		len++;
	int i = 0;
	char *dup = malloc(sizeof(char) * len);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}