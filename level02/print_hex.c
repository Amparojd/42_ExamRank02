#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	if (str[i] == 0)
		return (0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	print_hex(int num)
{
	char hex[] = "0123456789abcdef";
	char to_write;
	if (num > 16)
		print_hex(num / 16);
	to_write = hex[num % 16];
	write (1, &to_write, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write (1, "\n", 1);
	return (0);
}