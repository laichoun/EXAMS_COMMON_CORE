

#include <unistd.h>

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
	return (result * sign);
}

void	putnbr(int nbr)
{
	if (nbr >= 10)
		putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[100] = "\t \n      -17181996sddfgd17";
	int	result;
	int	nbr;

	nbr = 2345;
	result = ft_atoi(str);
	printf("%d\n", result);
	printf("%d\n", nbr);
}
*/

int	main(int argc, char **argv)
{
	int	sum;
	int	nbr;

	sum = 0;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr > 0)
		{
//			nbr = ft_atoi(argv[1]);
			if (is_prime(nbr))
				sum = sum + nbr;
			nbr --;
		}
		putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
