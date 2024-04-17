/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:15:10 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 13:27:57 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (s[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j ++;
		}
		if (check == 0)
			return (i);
		i ++;
	}
	return (i);
}

int	main(void)
{
	char	s[100] = "hello";
	char	accept[100] = "jfkhpell";
	size_t	result;

	result = ft_strspn(s, accept);
	printf("moi : %ld\n", result);
	printf("reel : %ld\n", strspn(s, accept));
}
