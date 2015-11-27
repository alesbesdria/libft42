/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:14:45 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/11/26 18:14:52 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;

	i = 0;
	while (*restrict src(i) != '\0')
	{
		*dst = *src;

	}
}
