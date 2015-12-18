/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:32:06 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/06 04:38:49 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = ft_strlen(s2);
	if (!len)
		return ((char *)s1);
	while (*s1 && len <= n--)
		if (!ft_memcmp(s1++, s2, len))
			return ((char *)s1 - 1);
	return (NULL);
}
