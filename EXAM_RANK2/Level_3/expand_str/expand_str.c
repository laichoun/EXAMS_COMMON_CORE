
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
			i ++;
		while (argv[1][i])
		{
			if (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
				space = 1;
			if (!(argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)))
			{
				if (space)
					write(1, "   ", 3);
				write(1, &argv[1][i], 1);
				space = 0;
			}
			i ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
