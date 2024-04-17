/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:39:21 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 14:46:46 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	len = 0;
	while (str[len])
		len ++;
	len --;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i ++;
		len --;
	}
	return (str);
}

int	main(void)
{
	char s[100] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}
