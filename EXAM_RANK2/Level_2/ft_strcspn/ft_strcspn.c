/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:38:32 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 10:30:44 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i; // pour s
	size_t	j; // pour reject

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
	char	s[100] = "Hsma";
	char	reject[100] = "Chat";
	size_t	result;

	result = ft_strcspn(s, reject);
	printf("%ld", result);

}
