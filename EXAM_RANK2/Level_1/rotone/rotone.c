/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:34:44 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/13 15:43:39 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if (argv[1][i] == 'z')
				write(1, "a", 1);
			else if ((argv[1][i] >= 65 && argv[1][i] <= 89) || (argv[1][i] >= 97 && argv[1][i] <= 121))
			{
				argv[1][i] = argv[1][i] + 1;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
