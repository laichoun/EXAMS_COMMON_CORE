
#include <stdio.h>

int	isvalidbase(int ch, int baselen)
{
	int	i;
	char	*lcbase = "0123456789abcdef";
	char    *ucbase = "0123456789ABCDEF";

	i = 0;
	while (i < baselen)
	{
		if (ch == lcbase[i] || ch == ucbase[i])
			return (1);
		i ++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
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
	while (str[i] && isvalidbase(str[i], str_base))
	{
		result = result * str_base;
		if (str[i] >= 48 && str[i] <= 57)
			result = result + str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = result + str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result = result + str[i] - 'A' + 10;
		i ++;
	}
	return (sign * result);
}


int	main(void)
{
	char str[100] = "      \t\n-17081996abcerddefg12";;
	int	result;

	result = ft_atoi_base(str, 16);
	printf("%d", result);
}
