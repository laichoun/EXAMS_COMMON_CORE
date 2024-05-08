/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:32:20 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 13:37:14 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		else
			i = i * 2;
	}
	return (0);
}

int	main(void)
{
	printf("%d", is_power_of_2(11));
}

