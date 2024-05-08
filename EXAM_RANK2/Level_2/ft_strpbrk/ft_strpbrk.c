/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:40:18 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 12:49:55 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)s1 + i);
			j ++;
		}
		i ++;
	}
	return (NULL);
}

int	main(void)
{
	char	s1[100] = "Luffy";
	char	s2[100] = "Evry";
	char	*result;

	result = ft_strpbrk(s1, s2);
	printf("me :%s\n", result);
	printf("reel :%s\n", strpbrk(s1, s2));

}
