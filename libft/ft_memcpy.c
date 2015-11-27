/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 04:00:18 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/11/26 18:19:29 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;

	i = 0;
	while (src[i] =< n)
	{
		return (src);
	}
	if ( //overlap)
	{
		ft_memmove(src);
	}
	dest = src;
	return (dest);
}
