/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:49:18 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/01 13:50:15 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	i
}
{
	char	*sub;
	int		i;

	i = 0;
	sub = (ft_strnew(len + 1));
	while (start <= len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}
