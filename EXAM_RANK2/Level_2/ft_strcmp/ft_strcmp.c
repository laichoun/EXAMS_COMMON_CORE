/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:00:28 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 12:08:18 by laichoun         ###   ########.fr       */
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
	char	s1[100] = "Asmal";
	char	s2[100] = "Asmaa";
	int	result;

	result = ft_strcmp(s1, s2);
	if (result == 0)
		printf("Même chaine de caractère");
	else if (result < 0)
		printf("s1 est avant s2");
	else if (result > 0)
		printf("s1 après s2");
	return (0);
}
