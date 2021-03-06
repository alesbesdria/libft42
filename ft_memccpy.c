/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:58:08 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/14 16:32:32 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	while (i < n)
	{
		if (*tmp2 == (unsigned char)c)
		{
			*tmp++ = *tmp2++;
			return (tmp);
		}
		else
			*tmp++ = *tmp2++;
		i++;
	}
	return (NULL);
}
