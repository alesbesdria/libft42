/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:18:02 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/03 16:04:51 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == s2[i])
		return (s1[i]);
}
{
	unsigned int		i;
	unsigned char		*tmp1;
	unsigned char		*tmp2;

	tmp1 = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	while (tmp1[i] == tmp2[i] && i <= n)
	{
		i++;
		if (i == (unsigned int)n || (tmp1[i] == '\0' && tmp2[i] == '\0'))
			return (0);
	}
	return (tmp1[i] - tmp2[i]);
}
