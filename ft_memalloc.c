/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:57:38 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/14 16:58:24 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*mem;

	if ((mem = (char*)malloc(size)))
	{
		ft_memset(mem, 0, size);
		return (mem);
	}
	return (NULL);
}
