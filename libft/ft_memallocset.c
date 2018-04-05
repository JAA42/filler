/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:11:02 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/28 20:44:51 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memallocset(size_t size, char c)
{
	void	*dest;

	if ((dest = (void *)malloc(size)) == NULL)
		return (NULL);
	ft_memset(dest, c, size);
	return (dest);
}
