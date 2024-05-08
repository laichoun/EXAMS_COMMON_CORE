/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:46:54 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 11:53:54 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
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
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result = (result * 10) + str[i] - 48;
		i ++;
	}
	return (sign * result);
}

int	main(void)
{
	char	str[100] = "     \t\rq17081996sasas18";
	int		result;

	result = ft_atoi(str);
	printf("%d", result);
}
