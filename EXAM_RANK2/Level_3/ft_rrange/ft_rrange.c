
#include <stdio.h>
#include <stdlib.h>



int	*ft_rrange(int start, int end)
{
	int	i;
	int	*tab;
	int	step;
	int	len; 

	i = 0;
	step = 1;
	len = end - start;
	if (len < 0)
		len = -len;
	len ++;
	tab = malloc(len * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < len)
	{
		if (start < end)
			step = -1;
		tab[i] = end;
		end = end + step;
		i ++;
	}
	return (tab);
}

int	main()
{
	int	i;
	int	start;
	int	end;
	int	*result;

	i = 0;
	start = 0;
	end = -3;
	result = ft_rrange(start, end);
	if (result == NULL)
	{
		printf("Mauvaise allocation mémoire");
		return (1);
	}
	printf("Resulta :");
	while (i < abs(end - start) + 1)
	{
		printf("%d ", result[i]);
		i ++;
	}
	return (0);
}
