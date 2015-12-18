/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:53:41 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/09 13:53:45 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int len;

	len = ft_strlen(s2);
	if (!len)
		return ((char *)s1);
	while (*s1)
		if (!ft_memcmp(s1++, s2, len))
			return ((char *)s1 - 1);
	return (NULL);
}
