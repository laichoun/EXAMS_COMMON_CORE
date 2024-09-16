

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	nbr1;
		int	nbr2;

		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[2]);
		if (nbr1 > 0 && nbr2 > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 = nbr1 - nbr2;
				else
					nbr2 = nbr2 - nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}


/*autre version : pibernar*/
int	main(int argc, char **argv)
{
	int	i;
	int	n1;
	int	n2;
	int	pgcd;

	i = 0;
	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	if (n1 > 0 && n2 > 0)
	{
		while (i <= n1 / 2 && i <= n2 /2)
		{
			if (n1 % i == 0 && n2 % i == 0)
				pgcd = i;
			i ++;
		}
	}
	return (0);
}
