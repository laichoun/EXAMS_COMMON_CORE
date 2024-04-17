/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:31:01 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 08:49:04 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d\n", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%d\n", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '*')
			printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%d\n", atoi(argv[1]) / atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
