/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:01:25 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/13 13:20:01 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i ++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main(void)
{
	char	s2[] = "Monkey D Luffy";
	char	s1[] = "";
//	char	* result;

	printf("La chaine avant est : %s\n", s1);
	ft_strcpy(s1, s2);
	printf("La chaine après est : %s", s1);
}
*/
