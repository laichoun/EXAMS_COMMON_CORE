/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:18:26 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/13 11:21:57 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i ++;
		while (argv[1][i] && argv[1][i] != 32 && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
