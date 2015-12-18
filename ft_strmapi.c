/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:44:18 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/14 16:11:27 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dststr;

	if (!s || !f)
		return (NULL);
	dststr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dststr)
		return (NULL);
	i = -1;
	while (s[++i])
		dststr[i] = f(i, s[i]);
	dststr[i] = '\0';
	return (dststr);
}
