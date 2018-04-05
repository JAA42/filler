#include "player.h"

void	ft_read_first_info(void)
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
	
	exit(0);
}

void	ft_play(void)
{
	ft_putstr("mise en place");
}

int		main(void)
{
	ft_read_first_info();
	ft_play();
	return (0);
}
