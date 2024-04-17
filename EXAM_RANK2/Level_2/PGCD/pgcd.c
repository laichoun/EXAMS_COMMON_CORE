/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:22:23 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/17 12:18:19 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	number1;
	int	number2;

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	if (argc == 3)
	{
		if (number1 >= 0 && number2 >= 0)
		{
			while (number1 != number2)
			{
				if (number1 > number2)
					number1 = number1 - number2;
				else
					number2 = number2 - number1;
			}
		printf("%d", number1);
		}
	}
	printf("\n");
}
