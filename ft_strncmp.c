/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:03:44 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/07 16:05:06 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		if (s1[i] > s2[i])
			return ((	unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s2[i] > s1[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
		n--;
	}
	return (0);
}
