/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:21:32 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/07 20:41:51 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ch;

	ch = (char)c;

	if (!s)
		return (NULL);
	while (*s != '\0' || ch == '\0')
	{
		if (*s == ch)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
