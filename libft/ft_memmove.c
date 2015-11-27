/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:19:38 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/11/27 17:13:16 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	size_t i;

	i = 0;
	while (i > n)
	{
		tmp = (char*) src;
		dst = tmp;
		i++;
	}
	return (dst);
}
