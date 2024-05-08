

void	rostring(char *str)
{
	int		i = 0;
	int		first_word_length = 0;

	while (str[i])
	{
		// skip beggining whitespaces
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		{
			// if it's the beggining
			if (first_word_length == 0)
				// keep the length of first word for later
				while (str[i] && (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))))
				{
					i ++;
					first_word_length++;
				}
			else
			{
				// for other words, just write it to stdout (+ one whitespace)
				while (str[i] && (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))) && write(1, &str[i++], 1));
				write(1, " ", 1);
			}
		}
	}

	// write first word
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (first_word_length--)
	{
		write(1, &str[i], 1);
		i ++;
	}

}

int		main(int ac, char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}


/*
void	rostering(char *str)
{
	int	i;
	int	first_word_start;
	int	first_word_end;
	int	flag;

	i = 0;
	first_word_start = 0;
	first_word_end = 0;
	flag = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (first_word_start == 0)
		while (str[i] && (str[i] != 32 || str[i] != '\t'))
		{	
			i ++;
			first_word_start ++;
		}
	else
		while (str[i] && (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))) && write(1, &str[i ++], 1))
		write(1, " ", 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostering(argv[1]);
	write(1, "\n", 1);
	return (0);
}

*/
