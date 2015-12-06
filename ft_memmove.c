/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:19:38 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/06 01:24:47 by mmeirsma         ###   ########.fr       */
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
{
	char	*copy;
	char	*p1;
	size_t	i;

	copy = (char *)malloc(sizeof(char)*n);
	p1 = (char *)s1;
	i = 0;
	while (i < n)
	{
		copy[i] = ((char *)s2)[i];
		i++;
	}
	while (n > 0)
	{
		n--;
		p1[n] = copy[n];
	}
	return (s1);
}
