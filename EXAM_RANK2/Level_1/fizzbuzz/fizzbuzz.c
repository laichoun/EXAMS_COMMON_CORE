/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:24:43 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/13 11:46:04 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int nb)
{
	if (nb >= 10)
		ft_write_number(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 != 0)
			write(1, "fizz", 4);
		else if (nb % 3 != 0 && nb % 5 == 0)
			write(1, "buzz", 4);
		else if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_write_number(nb);
		write(1, "\n", 1);
		nb ++;
	}
	return (0);
}
