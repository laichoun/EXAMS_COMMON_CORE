

#include <unistd.h>
#include <stdlib.h>

void	putnbr(int nbr)
{
	if (nbr >= 10)
		putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;

	i = 1;
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		while (i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(nbr);
			write(1, " = ", 3);
			putnbr(i * nbr);
			write(1, "\n", 1);
			i ++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
