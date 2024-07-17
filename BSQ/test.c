#include <stdio.h>
#include <stdlib.h>

typedef struct s_sqr
{
	int	x;
	int	y;
	int	size;
}	t_q;

int	collision(t_q sqr, char **map)
{
	int	x;
	int	y;
	int	col;
	int	row;

	x = sqr.x;
	y = sqr.y;
	row = 0;
	while (row < sqr.size)
	{
		col = 0;
		while (col < sqr.size)
		{
			if (map[row + sqr.y][col + sqr.x] == 'o')
			{
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}

char	**give_map(int h, int w)
{
	char	**map;
	int		x;
	int		y;

	map = (char **) malloc(sizeof(char*));
	if (map == NULL)
		return (NULL);
	y = 0;
	while (y < h)
	{
		map[y] = (char *) malloc(sizeof(char) * w);
		x = 0;
		while (x < w)
		{
			map[y][x] = '0';
			x++;
		}
		y++;
	}
	map[0][0] = 'o';
	map[2][4] = 'o';
	map[6][0] = 'o';
	map[2][7] = 'o';
	return (map);
}

int main()
{
	int map_w = 8;
	int map_h = 8;
	char **map = give_map(map_w, map_h);
	t_q	biggest;
	t_q	current;

	biggest.x = 0;
	biggest.y = 0;
	biggest.size = 0;

	current.y = 0;
	while (current.y < map_h)
	{
		current.x = 0;
		while (current.x < map_w)
		{
			current.size = 0;
			while (current.x + current.size < map_w
					&& current.y + current.size < map_h)
			{
				if (collision(current, map))
				{
					printf("COLLISION!\n");
					current.size--;
					break ;
				}
			}
			if (collision(current, map))
			{
				
			}
			else
			{
				printf("X: %d Y: %d Size: %dx%d\n", current.x, current.y, current.size + 1, current.size + 1);
				if (current.size > biggest.size)
				{
					printf("!!NEW RECORD!!\n");
					biggest.x = current.x;
					biggest.y = current.y;
					biggest.size = current.size;
				}
			}
			current.x++;
		}
		current.y++;
	}
	return (0);
}
