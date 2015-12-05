/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:15:27 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/03 16:03:59 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	(unsigned char)c;
	const (unsigned char*)s;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (*s[i]);
		i++;
	}
	return (NULL);
}
