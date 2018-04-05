#include "player.h"

void	ft_play(void)
{
	char *line;
	int fd;//test

	fd = open("send_by_vm.txt", O_RDWR | O_CREAT, O_APPEND | S_IRWXU);//test
	line = NULL;
	while (get_next_line(0, &line))
	{
		ft_putstr_fd(line, fd);
		ft_putstr_fd("\n", fd);
	}
	close(fd);
}

int		main(void)
{
	t_info *infos;

	infos = NULL;
	ft_play();
	return (0);
}
