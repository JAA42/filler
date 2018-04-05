/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:51:51 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 13:56:50 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# define BUFF_SIZE 9999

int get_next_line(const int fd, char **line);

#endif
