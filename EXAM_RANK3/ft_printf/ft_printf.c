/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:56:56 by laichoun          #+#    #+#             */
/*   Updated: 2024/07/26 09:36:38 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void	ft_putstr(char *str, int *length)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		*length += write(1, "(null)", 6);
		return ;
	}
	while (str[i])
	{
		*length += write(1, &str[i], 1);
		i ++;
	}
}

void	put_nbr_hexa(long long int nbr, int base, int *length)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		*length += write(1, "-", 1);
	}
	if (nbr >= base)
	{
		put_nbr_hexa((nbr / base), base, length);
	}
	*length += write(1, &"0123456789abcdef"[nbr % base], 1);
}



int	ft_printf(const char *format, ... )
{
	int	i;
	int	length;
	va_list args;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i ++;
			if (format[i] == 's')
				//write(1, "s", 1);
				ft_putstr(va_arg(args, char *), &length);
			else if (format[i] == 'd')
				//write(1, "d", 1);
				put_nbr_hexa((long long int)va_arg(args, int), 10, &length);
			else if (format[i] == 'x')
				//write(1, "x", 1);
				put_nbr_hexa((long long int)va_arg(args, unsigned int), 16, &length);
		}
		else
		{
			write(1, &format[i], 1);
			length ++;
		}
		i ++;
	}
	va_end(args);
	return (length);
}
/*
int	main(void)
{
//	int	i;

	printf("real : Hello\n");
	printf("real : %s\n", "Hello");
	printf("real : %d\n", 42);
	printf("real : %x\n", 42);
	printf("real : %x\n", -42);
	printf("\n");
	ft_printf("me : Hello\n");
	ft_printf("me : %s\n", "Hello");
	ft_printf("me : %d\n", 42);
	ft_printf("me : %x\n", 42);
	ft_printf("me : %x\n", -42);
	ft_printf("\n");

}
*/
