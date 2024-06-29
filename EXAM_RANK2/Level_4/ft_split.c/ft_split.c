
#include <stdio.h>
#include <stdlib.h>


char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && (i < len))
	{
		dst[i] = src[i];
		i ++;
	}
	while (i < len)
	{
		dst[i ++] = '\0';
	}
	return (dst);
}

//int	ft_split(char *str)
char	**ft_split(char *str)
{
	int	i;
	int	wc;
	char	**result;
	int	j;
	int	k;

	i = 0;
	wc = 0;
	k = 0;
//	1) compter le nombre de mots: 
	while (str[i])
	{
		while (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
			i ++;
		if (str[i])
			wc ++;
		while (str[i]  && str[i] != 32 && str[i] != '\t' && str[i] != '\n')
			i++;
	}

//	2) on alloue de la mémoire 	
	result = malloc((wc + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
// chaque mot dans la nouvelle allocation	
	while (str[i])
	{
		while (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
			i ++;
		j = i; // première lettre du mot
		while (str[i] && str[i] != 32 && str[i] != '\t' && str[i] != '\n')
			i ++;
		if (i > j)
		{
//			3) allouer de la mémoire pour chaque mot
			result[k] = malloc(((i - j) + 1) * sizeof(char));
			ft_strncpy(result[k++], &str[j], (i - j));
		}
	}
	result[k] = NULL;
	return(result);
}

int	main(void)
{
	char	**result;
	int	i;

	i = 0;
	char	str[100] = "Test test";

	result = ft_split(str);
	printf("%s", result[i]);
}
