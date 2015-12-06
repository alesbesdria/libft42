/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:19:38 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/06 04:16:44 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	char	*p1;
	size_t	i;

	tmp = (char *)malloc(sizeof(char)*len);
	p1 = (char *)src;
	i = 0;
	while (i < len)
	{
		tmp[i] = ((char *)dst)[i];
		i++;
	}
	while (len > 0)
	{
		len--;
		p1[len] = tmp[len];
	}
	return ((void*)src);
}
