/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:28:59 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 20:30:49 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i ++;
	}
	return (*s);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j++])
				i ++;
			if (i == len)
				ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
