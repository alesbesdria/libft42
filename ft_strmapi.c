/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:44:18 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/01 13:45:07 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	i
}
{
	if (s && f)
	{
		int		i;
		int		j;
		char	*nstr;

		j = ft_strlen((char*)s);
		i = 0;
		nstr = (char*)malloc(j * sizeof(nstr));
		while (s[i] != '\0')
		{
			nstr[i] = f(s[i], i);
			i++;
		}
		return (nstr);
	}
	return (NULL);
}
