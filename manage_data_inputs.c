#include "filler.h"

void		ft_get_new_piece(char *line, t_info *info, int fd)
{
	int		ypiece;
	int		i;

	get_next_line(0, &line); // Position GNL : on l'avance sur piece x y : //
	ypiece = ft_atoi(line + 6);
	i = -1;
	if (!(info->piece = (char **)malloc(sizeof(char *) * (ypiece + 1))))
		return ;
	info->piece[ypiece] = NULL;
	while (++i != ypiece)
	{
		get_next_line(0, &line);
		info->piece[i] = ft_strdup(line);
	}
}

int			ft_update_map(char *line, t_info *info, int fd)
{
	int		x;
	int		y;

	x = -1;
	y = 0;
	get_next_line(0, &line);
	while (info->map[++y])
	{
		while (info->map[++x])
			if (line[x + 4] != '.' && line[x + 4] != info->map[y][x])
				info->map[y][x] = line[x + 4];
		x = -1;
		get_next_line(0, &line);
	}
	// POSITION GNL : Derniere ligne de map  (014)//
	return (2);
}

int			ft_init_players_map(char *line, t_info *info, int fd)
{
	int		i;

	i = 0;
	if (!(info->player))
	{
		info->player = (line[10] == 1) ? 'O' : 'X';
		return (0);
	}
	if (!info->ymap)
	{
		info->ymap = ft_atoi(line + 8);
		info->xmap = ft_atoi(ft_strrchr(line, ' ') + 1);
		if (!(info->map = (char **)malloc(sizeof(char *) * (info->ymap + 1))))
			return (0);
		info->map[info->ymap] = NULL;
		while (info->map[i])
		{
			info->map[i] = ft_memallocset((info->xmap + 1), '.');
			info->map[i++][info->xmap] = '\0';
		}
		return (1);
	}
	return (1);
}

t_info		*ft_init_info(t_info *info)
{
	if (!(info = (t_info*)malloc(sizeof(t_info))))
		return (NULL);
	info->player = '\0';
	info->xmap = 0;
	info->ymap = 0;
	info->map = NULL;
	info->piece = NULL;
	return (info);
}
