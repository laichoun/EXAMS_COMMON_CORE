

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	*duplicate;

	i = 0;
	len = 0;
	while (str[len])
		len ++;
	duplicate = malloc((len + 1) * sizeof(char));
	while (str[i])
	{
		duplicate[i] = str[i];
		i ++;
	}
	duplicate[i] = '\0';
	return (duplicate);

}

int	ft_count_nbr(int nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		len ++;
	}
	while (nbr >= 10)
	{
		len ++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int	len;
	char	*result;
	int	sign;

	sign = 1;
	len = ft_count_nbr(nbr);
	if (nbr < 0)
		sign = -sign;
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	while (len --)
	{
		result[len] = '0' + (nbr % 10) * sign;
		nbr = nbr / 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
/*
int	main(void)
{
	int	nbr;
	char	*result;

	nbr = -2147483648;
	result = ft_itoa(nbr);
	printf("%s", result);

}
*/
