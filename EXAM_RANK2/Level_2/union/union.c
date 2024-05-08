/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:59:16 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 17:28:26 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles1(char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (0);
		i ++;
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
			if (check_doubles1(argv[1], argv[1][i], i))
			{
				write(1, &argv[1][i], 1);
			}
			i ++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (check_doubles1(argv[2], argv[2][j], j))
			{
				if (check_doubles1(argv[1], argv[2][j], i))
					write(1, &argv[2][j], 1);
			}
			j ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
