/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:44:18 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/09 10:28:01 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (s && f)
	{
		int		i;
		int		j;
		char	*nstr;

		j = ft_strlen((char*)s);
		i = 0;
		nstr = (char*)malloc(j * sizeof(char) + 1);
		while (s[i] != '\0')
		{
			nstr[i] = f(i, s[i]);
			i++;
		}
		return (nstr);
	}
	return (NULL);
}
