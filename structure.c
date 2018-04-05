#include "player.h"

int		ft_init_players_map(char *line, t_info *info, int fd)
{
	int i;

	i = 0;
//	ft_putstr_fd("popo", fd);
	if (!(info->player))
	{
//		ft_putstr_fd("popo", fd);
		info->player = (line[10] == 1) ? 'O' : 'X';
//		ft_putstr_fd("pipi", fd);
		return (0);
	}
	if (!info->ymap)
	{
		info->ymap = ft_atoi(line + 8);
		info->xmap = ft_atoi(ft_strrchr(line, ' ') + 1);
		return (0);
	}
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

t_info	*ft_init_info(t_info *info)
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
