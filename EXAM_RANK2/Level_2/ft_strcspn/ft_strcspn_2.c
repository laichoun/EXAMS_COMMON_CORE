/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:59:27 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 12:08:18 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j ++;
		}
		i ++;
	}
	return (i);
}

int	main(void)
{
	char	s[100] = "Asma";
	char	reject[100] = "Chama";
	size_t	result;

	result = ft_strcspn(s, reject);
	printf("moi : %ld\n", result);
	printf("real : %ld\n", strcspn(s, reject));
}
