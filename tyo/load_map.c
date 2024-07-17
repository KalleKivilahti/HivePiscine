#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "utils.h"
#include "header.h"
#include "validate_map.h"

#include	<stdio.h>

int	file_length(char *filepath)
{
	char	buf;
	int		len;
	int		fd;

	len = 0;
	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (read(fd, &buf, 1))
		len++;
	if (close(fd) == -1)
		return (-1);
	return (len);
}

char	*file_to_string(char *filepath)
{
	char	*ret;
	int		fd;
	int		len;

	len = file_length(filepath);
	if (len < 1)
		return (NULL);
	ret = (char *) malloc(sizeof(int) * (len + 1));
	if (ret == NULL)
		return (NULL);
	fd = open(filepath, O_RDONLY);
	if (fd == -1)
	{
		free(ret);
		return (NULL);
	}
	read(fd, ret, len);
	ret[len] = '\0';
	if (close(fd) == -1)
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}

t_map	*init_map(char *str)
{
	t_map 	*map;
	int		first_line_len;
	char	*map_lines;

	first_line_len = 0;
	map = (t_map *) malloc(sizeof(t_map));
	if (map == NULL)
		return (map);
	while (str[first_line_len] != '\n')
		first_line_len++;
	map->occp = str[first_line_len - 1];
	map->obst = str[first_line_len - 2];
	map->free = str[first_line_len - 3];
	map_lines = (char *) malloc(sizeof(char) * (first_line_len + 1));
	if (map_lines == NULL)
	{
		free(map);
		return (NULL);
	}
	ft_strncpy(map_lines, str, first_line_len - 4);
	map->h = ft_atoi(map_lines);
	free(map_lines);
	return (map);
}

int	allocate_grid(t_map *map)
{
	int rows;

	map->grid = (int **) malloc(sizeof(int*) * map->h);
	if (map->grid == NULL)
		return (-1);
	rows = 0;
	while (rows < map->h)
	{
		map->grid[rows] = (int *) malloc(sizeof(int) * map->w);
		if (map->grid[rows] == NULL)
		{
			free_grid(map, rows);
			return (-1);
		}
		rows++;
	}
	return (0);
}
void free_grid(t_map *map, int rows)
{
	while (rows >= 0)
	{
		free(map->grid[rows]);
		rows--;
	}
	free(map);
}

int main(int argc, char *argv[])
{
	char	*str;
	t_map	*map;

	if (argc == 2)
	{
		str = file_to_string(argv[1]);
		if (validate_first_line(str))
			map = init_map(str);
		else

		write(1, &(map->free), 1);
		write(1, &(map->obst), 1);
		write(1, &(map->occp), 1);
		printf("\nmap lines: %d\n", map->h);
		free(map);
	}
	return (0);
}
