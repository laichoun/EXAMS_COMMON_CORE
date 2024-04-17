/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:51:06 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 09:19:35 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i ++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result = result * 10 + str[i] - 48;
		i ++;
	}
	return (result * sign);
}

int	main(void)
{
	char	str[100] = "                  \t\n\r-17081996dfdf";
	int		result;

	result = ft_atoi(str);
	printf("Mon entier est %d", result);
}
