/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:55:53 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/26 15:22:21 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i; 

	i = 8;
	unsigned char	bit;

	while (i --)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
}

int	main(void)
{
	unsigned char octet = 8;
	print_bits(octet);
	return (0);
}

/*
 * octet >> i : Cela effectue un décalage de bits vers la droite sur la variable octet de i positions. Dans le contexte de cette fonction, i est utilisé pour parcourir les bits de octet de droite à gauche.

  & 1 : Cela effectue un ET bit à bit entre le résultat du décalage de bits et 1. Cela a pour effet de ne conserver que le bit le plus à droite du résultat du décalage.

  + 48 : Cela ajoute 48 au résultat de l'opération précédente. En ASCII, le chiffre 0 a la valeur décimale 48. Donc, en ajoutant 48, nous convertissons le résultat de l'opération précédente en son équivalent ASCII. Cela signifie que si le résultat du ET bit à bit est 1, bit sera égal à 49, ce qui est le code ASCII pour le chiffre 1. Si le résultat du ET bit à bit est 0, bit sera égal à 48, le code ASCII pour le chiffre 0.*/

