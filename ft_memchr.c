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
	size_t i;

	i = 0;
	while (s && i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);

		i++;
	}
	return (NULL);
}
