#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;

    char **arr = malloc(sizeof(char) * 1000);

	while (str[i])
	{
		int index = 0;
		char *s = malloc(sizeof(char) * 1000);
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (!str[i])
		{
			arr[j] = NULL;
			return arr;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			s[index] = str[i];
			index++;
			i++;
		}
		s[index] = '\0';
		arr[j] = s;
		j++;
	}
	arr[j] = NULL;
	return arr;
}
int main (int argc, char **argv)
{
	if (argc > 1)
	{
		char **array = ft_split(argv[1]);
		int i = 1;
		while (array[i])
		{
			ft_putstr(array[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(array[0]);
	}
	write(1, "\n", 1);
	return (0);
}