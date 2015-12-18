/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:43:15 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/06 04:38:25 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dststr;

	if (!s || !f)
		return (NULL);
	dststr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dststr)
		return (NULL);
	i = -1;
	while (s[++i])
		dststr[i] = f(s[i]);
	dststr[i] = '\0';
	return (dststr);
}
