#include "player.h"

int		ft_update_map(char *line, t_info *info)
{
	int		x;
	int		y;

	x = -1;
	y = -1;
	while (info->map[++y])
	{
		while (info->map[++x])
			if (line[x + 4] != '.' && line[x + 4] != info->map[y][x])
				info->map[y][x] = line[x + 4];
		x = -1;
		get_next_line(0, &line);
	}
	return (2);
}

void		ft_play(t_info *info)
{
	char	*line;
	int		fd;//test
	int		state = 0;

	fd = open("send_by_vm.txt", O_RDWR | O_CREAT, O_APPEND | S_IRWXU);//test
	line = NULL;
	while (get_next_line(0, &line))
	{
		if (state == 0)
			state = ft_init_players_map(line, info, fd);
		else if (state == 1)
			state = ft_update_map(line, info);
		else if (state == 2)
		{
			ft_puttab_fd(info->map, fd);
			exit(0);
		}
			//ft_get_new_piece;
			//ft_algorithm;
			//ft_putstr;
			//free;
	}
}

int			main(void)
{
	t_info	*info;

	info = NULL;
	info = ft_init_info(info);
	ft_play(info);
	return (0);
}
