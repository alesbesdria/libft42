/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:23:54 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/05 01:25:14 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char ch;
	int i;

	ch = (char)c;
	i = ft_strlen(s) - 1;
	while (i <= 0)
	{
		if (s[i] == ch)
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}
