/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:14:13 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 12:29:26 by laichoun         ###   ########.fr       */
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

#include <stdio.h>

int	main(void)
{
	char	s[100] = "Asma";
	char	reject[100] = "CousCCm";

	printf("%ld\n", ft_strcspn(s, reject));
	printf("%ld\n", strcspn(s, reject));
}
