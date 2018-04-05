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

int		main(void);
#endif
