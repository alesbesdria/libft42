/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:26:58 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/14 16:25:13 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (n <= lendst)
		return (n + lensrc);
	if (lensrc < n - lendst)
	{
		ft_memcpy(dst + lendst, src, lensrc);
		dst += lendst + lensrc;
	}
	else
	{
		ft_memcpy(dst + lendst, src, n - lendst - 1);
		dst += n - 1;
	}
	*dst = '\0';
	return (lensrc + lendst);
}
