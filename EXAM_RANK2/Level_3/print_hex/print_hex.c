

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i ++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i ++;
	}
	return (sign * result);
}


void	print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &"0123456789abcdef"[nbr % 16], 1);
}

int	main(int argc, char **argv)
{
	int	nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		print_hex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
