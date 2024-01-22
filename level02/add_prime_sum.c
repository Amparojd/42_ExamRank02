// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>

void write_number(int number)
{
    char to_write;
    if(number > 9)
        write_number(number / 10);
    to_write = number % 10 + '0';
    write(1, &to_write, 1);
}

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return(res);
}

int ft_is_prime(int number)
{
    int i = 2;

    if(number == 0 || number == 1)
        return(0);
    
    while(i < number)
    {
        if(number % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int	main(int argc, char **argv)
{
	int i = 1;
	int num = 0;
	int res = 0;
		
	if (argc == 2 && argv[1][0] != '-')
	{
		num = ft_atoi(argv[1]);
		while (i <= num)
		{
			if (ft_is_prime(i))
				res += i;
			i++;
		}
		write_number(res);
	}
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}