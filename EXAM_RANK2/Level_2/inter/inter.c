/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:19:46 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 13:30:57 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (pos > i)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (check_doubles(argv[1], argv[1][i], i))
					{
						write(1, &argv[1][i], 1);
						break ;
					}
				}
				j ++;
			}
			i ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
