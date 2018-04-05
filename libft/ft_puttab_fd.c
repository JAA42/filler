/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tabtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:24:20 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/05 16:16:44 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_puttab_fd(char **tab, int fd)
{
	int i;

	if (tab == NULL)
		return ;
	i = 0;
	while (tab[i])
	{
		ft_putstr_fd(tab[i++], fd);
		ft_putchar_fd('\n', fd);
	}
}
