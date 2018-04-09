#include "filler.h"

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
			{
				line = ft_update_map(line, info, fd);
				ft_get_new_piece(line, info, fd);
				ft_puttab_fd(info->map, fd);
				ft_puttab_fd(info->piece, fd);
				//FREE LA PIECE APRES CHAQUE UTILISATION
				//n 
				//REMETTRE STATE A 0 apres
			}
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
