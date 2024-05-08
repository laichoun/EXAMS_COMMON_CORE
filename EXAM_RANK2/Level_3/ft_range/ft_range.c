

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*tab;
	int	len;
	int	i;
	int	step;

	len = end - start;
	i = 0;
	step = 1;
	if (len < 0)
		len = -len;
	len = len + 1;
	tab = malloc(len * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < len)
	{
		if (start > end)
			step = -1;
		tab[i] = start;
		start = start + step;
		i ++;
	}
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	*tableau;
	int	i;

	start = 0;
	end = -3;
	i = 0;
	tableau = ft_range(start, end);
	if (tableau == NULL)
	{
		printf("erreur lors allocation memoire");
		return (1);
	}
	printf ("RESULT : ");
	while (i < abs(end - start) + 1)
	{
		printf("%d ", tableau[i]);
		i ++;
	}
	return (0);

}
