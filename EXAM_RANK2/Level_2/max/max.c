/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:45:52 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 14:53:44 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	result;

	i = 0;
	result = tab[i];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i ++;
	}
	return (result);
}

int	main(void)
{
	int	tab[5] = {10, 5, 100, 6, 458};
	int	result;

	result = max(tab, 5);
	printf("%d", result);
}
