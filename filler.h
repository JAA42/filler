#ifndef FILLER_H
# define FILLER_H
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
t_info	*ft_init_info(t_info *info);
char	*ft_update_map(char *line, t_info *info, int fd);
void	ft_get_new_piece(char *line, t_info *info, int fd);
int		ft_init_players_map(char *line, t_info *info ,int fd);
#endif
