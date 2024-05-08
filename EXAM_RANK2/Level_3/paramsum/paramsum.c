

#include <unistd.h>


void	putnbr(int nbr)
{
	if (nbr >= 10)
		putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}



int	main(int argc, char **argv)
{
	(void)argv;

	int	i;

	i = 0;
	while (i < argc - 1)
	{
		i ++;
	}
	putnbr(i);
	write(1, "\n", 1);
	return (0);
}
