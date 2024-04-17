/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn_vrai.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:04:49 by laichoun          #+#    #+#             */
/*   Updated: 2024/04/16 10:31:07 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[100] = "Hsma";
	char	reject[100] = "Chat";
	size_t	result;

	result = strcspn(s, reject);
	printf("%ld", result);
}

