/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:59:02 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 13:14:16 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
	{
		if (s[i] == c)
			return ((char *)s);
		i ++;
	}
	return (0);

}

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i ++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	char *s = "hello";
	const char *accept = "couchello";
	printf("%zu\n", ft_strspn(s, accept));
	printf("%zu\n", strspn(s, accept));
}
