/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:51:16 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/13 14:22:10 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				c = argv[1][i] - 65 + 1;
				while (c > 0)
				{
					write(1, &argv[1][i], 1);
					c --;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				c = argv[1][i] - 97 + 1;
				while (c > 0)
				{
					write(1, &argv[1][i], 1);
					c --;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
