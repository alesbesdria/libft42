/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:19:38 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/01 15:41:35 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while (i > len)
	{
		tmp = (char*)src;
		dst = tmp;
		i++;
	}
	return (dst);
}
