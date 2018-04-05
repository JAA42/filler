#include "player.h"

void	ft_read_first_info(void)
{
	char *line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		ft_putstr(line);
	}
}

void	ft_play(void)
{
	ft_putstr("mise en place");
}

int main(void)
{
	ft_read_first_info();
	ft_play();
	return (0);
}
