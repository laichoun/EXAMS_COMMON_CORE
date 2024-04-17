/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:20:39 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 09:33:06 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i ++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	int		result;
	char	s1[100] = "Asma";
	char	s2[100] = "Chama";

	result = ft_strcmp(s1, s2);
	if (result > 0)
		printf("S1 vient après S2");
	else if (result == 0)
		printf("Same string");
	else
		printf("S1 vient avant S2");
	return (0);
}
