#include "filler.h"

void		ft_get_new_piece(char *line, t_info *info, int fd)
{
	int		ypiece;
	int		i;

	ypiece = ft_atoi(line + 6);
	free(line);
	i = 0;
	if (!(info->piece = (char **)malloc(sizeof(char *) * (ypiece + 1))))
		return ;
	info->piece[ypiece] = NULL;
	while (i != ypiece)
	{
		get_next_line(0, &line);
		info->piece[i++] = ft_strdup(line);
		free(line);
	}
}

char	*ft_update_map(char *line, t_info *info, int fd)
{
	int		x;
	int		y;

	x = -1;
	y = -1;
	free(line);
	while (info->map[++y])
	{
		get_next_line(0, &line);
		while (info->map[y][++x])
			if (line[x + 4] != info->map[y][x])
				info->map[y][x] = line[x + 4];
		x = -1;
		free(line);
	}
	get_next_line(0, &line);
	return (line);
}

int			ft_init_players_map(char *line, t_info *info, int fd)
{
	int		i;

	i = 0;
	if (!info->player)
	{
		info->player = (line[10] == 1) ? 'O' : 'X';
		free(line);
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
	}
	free(line);
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
