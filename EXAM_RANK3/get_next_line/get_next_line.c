/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:40:59 by laichoun          #+#    #+#             */
/*   Updated: 2024/07/26 10:12:14 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

//ft_strchr

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i ++;
	}
	if (str[i] == '\0' && c == '\0')
		return (str + i);
	else
		return (NULL);
}

//ft_strjoin


char	*ft_strjoin(char *s1, char *s2)
{
	int	l1;
	int	l2;
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	new = malloc((l1 + l2 + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, s1);
	ft_strcpy(new + l1, s2);
	return (new);
}



char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*duplicate;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	while (str[i])
	{
		duplicate[i] = str[i];
		i ++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	int	to_copy;
	char	*newline;
	int	readed;
	char	*line;

	line = ft_strdup(buf);
	while (!(newline = ft_strchr(line, '\n')) && (readed = read(fd, buf, BUFFER_SIZE)))
	{
		buf[readed] = '\0';
		line = ft_strjoin(line, buf);
	}
	if (ft_strlen(line) == 0)
	{
		free(line);
		return (NULL);
	}
	if (newline != NULL)
	{
		to_copy = newline - line + 1;
		ft_strcpy(buf, newline + 1);
	}
	else
	{
		to_copy = ft_strlen(line);
		buf[0] = '\0';
	}
	line[to_copy] = '\0';
	return (line);
}
/*
int	main(void)
{
	char	*line;
	int	i;
	int	fd;

	i = 0;
	fd = open("example.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("%s", line);
		free(line);
		line = NULL;
	}
	close(fd);
	return (0);
}
*/
