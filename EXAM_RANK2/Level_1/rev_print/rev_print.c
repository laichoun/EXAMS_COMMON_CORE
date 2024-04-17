/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:29:26 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/13 14:58:54 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i ++;
		i --;
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i --;
		}
	}
	write(1, "\n", 1);
}

/*
#include <unistd.h>

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i])
            i++;
        while (i--)
            write(1, &av[1][i], 1);
    }
    write(1, "\n", 1);
}
*/
