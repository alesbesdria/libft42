/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:32:06 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/03 16:15:05 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	i
}
{
	size_t	length;

	length = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (length <= n)
	{
		while (*s1 && n - length + 1 > 0)
		{
			if (*s1 == *s2)
			{
				if (ft_memcmp((char *)s1, (char *)s2, length) == 0)
					return ((char *)s1);
			}
			s1++;
			n--;
		}
	}
	return (NULL);
}
