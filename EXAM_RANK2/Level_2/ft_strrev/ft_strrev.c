/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:51:21 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 12:56:10 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = 0;
	while (str[len])
		len ++;
	len --;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len --;
		i ++;
	}
	return (str);
}

int	main(void)
{
	char	str[100] = "Asma";

	ft_strrev(str);
	printf("%s", str);
}
