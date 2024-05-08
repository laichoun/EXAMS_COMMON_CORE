

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void	fill(char **tab, t_point size, char target, int col, int row)
{
//	1) checker si le points ne va pas sortir de la zone ou est cohérent 
	if (row < 0 || col < 0 || row >= size.y || col >= size.x)
		return ;
//	2) checke si il y a pas déjà la lettre ou si la cellule est différente de target
	if (tab[row][col] == 'F' || tab[row][col] != target)
		return ;
	tab[row][col] = 'F';
	fill(tab, size, target, col - 1, row);
	fill(tab, size, target, col + 1, row);
	fill(tab, size, target, col, row + 1);
	fill(tab, size, target, col, row - 1);
	
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char target;

	target = tab[begin.y][begin.x];
	fill(tab, size, target, begin.x, begin.y);	
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {6, 3};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
