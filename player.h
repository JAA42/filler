#ifndef PLAYER_H
# define PLAYER_H
# include "libft/libft.h"

typedef struct		s_info
{
	char	player;
	int		xmap;
	int		ymap;
	char	**map;
	char	**piece;
}					t_info;

int		ft_init_players_map(char *line, t_info *info ,int fd);
t_info	*ft_init_info(t_info *info);
int		ft_update_map(char *line, t_info *info);
int		main(void);
#endif
