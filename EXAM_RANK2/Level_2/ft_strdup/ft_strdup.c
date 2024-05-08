/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:32:10 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 12:39:07 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		i;

	i = 0;
	while (src[i])
		i ++;
	duplicate = malloc ((i + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplicate[i] = src[i];
		i ++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

int	main(void)
{
	char	src[100] = "Bonjour Asma";
	char	*duplicate;

	duplicate = ft_strdup(src);
	printf("%s", duplicate);
}
