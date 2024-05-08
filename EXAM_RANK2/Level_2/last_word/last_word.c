/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:41:09 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 13:53:45 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char *lw;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 32 && argv[1][i + 1] > 32)
				lw = &argv[1][i + 1];
			i ++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write(1, &lw[i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i ++;
		while (argv[1][i] != 32 && argv[1][i] != '\t')
			i --;
		i ++;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/
