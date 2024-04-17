/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:31:53 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 13:51:43 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplicate;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len ++;
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
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
	char	src[100] = "Monkey D Luffy";
	char	*duplicate;

	duplicate = ft_strdup(src);
	printf("%s", duplicate);
}
