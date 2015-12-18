/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:15:27 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/06 02:38:42 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p_s = s;

	while (n--)
	{
		if (*p_s == (unsigned char)c)
			return ((void*)p_s);
		p_s++;
	}
	return (NULL);
}
