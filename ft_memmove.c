/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 19:43:49 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/18 16:32:11 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*s;
	unsigned char			*d;
	void					*end;

	if (dest == src)
		return (dest);
	end = (void*)((unsigned long)src + n);
	if ((dest < src) || (dest > end))
		return (ft_memcpy(dest, src, n));
	s = src;
	d = dest;
	while (n-- != 0)
		d[n] = s[n];
	return (dest);
}
